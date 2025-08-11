#ifndef UNIFIEDFUNCTIONTESTER_H
#define UNIFIEDFUNCTIONTESTER_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <functional>
#include <memory>
#include "AssignmentStrategy.h"
#include "ComparisonStrategy.h"

//--------------------------------------------------
// Classe UnifiedFunctionTester: completamente modulare
//--------------------------------------------------
class UnifiedFunctionTester {
    std::vector<void*> input_data;
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;

    // Funzioni per studente e soluzione, generiche su std::vector<void*>&
    std::function<void*(std::vector<void*>&)> student_function;
    std::function<void*(std::vector<void*>&)> solution_function;

    std::unique_ptr<ComparisonStrategy> return_comparer;

    bool check_params;
    bool check_output;
    bool check_return;

public:
    UnifiedFunctionTester(
        std::vector<void*> input_data,
        std::vector<std::unique_ptr<AssignmentStrategy>> assigners,
        std::vector<std::unique_ptr<ComparisonStrategy>> comparers,
        std::function<void*(std::vector<void*>&)> student_func,
        std::function<void*(std::vector<void*>&)> solution_func,
        std::unique_ptr<ComparisonStrategy> return_comparer = nullptr,
        bool check_params = true,
        bool check_output = true,
        bool check_return = true
    )
    : input_data(std::move(input_data)),
      student_function(std::move(student_func)),
      solution_function(std::move(solution_func)),
      return_comparer(std::move(return_comparer)),
      check_params(check_params),
      check_output(check_output),
      check_return(check_return)
    {
        for (auto& a : assigners)
            assignment_strategies.push_back(std::move(a));
        for (auto& c : comparers)
            comparison_strategies.push_back(std::move(c));
    }

    bool run() const {
        size_t n = input_data.size();
        std::vector<void*> student_args(n), solution_args(n);

        // Assegno parametri tramite AssignmentStrategy
        for (size_t i = 0; i < n; ++i) {
            assignment_strategies[i]->assign(&student_args[i], input_data[i]);
            assignment_strategies[i]->assign(&solution_args[i], input_data[i]);
        }

        std::string studentOut, solutionOut;
        auto captureOutput = [](auto func, auto& args) {
            std::ostringstream temp;
            auto* old = std::cout.rdbuf(temp.rdbuf());
            void* ret = func(args);
            std::cout.rdbuf(old);
            return std::make_pair(temp.str(), ret);
        };

        void *stud_ret = nullptr, *sol_ret = nullptr;

        if (check_output) {
            auto [so, sr] = captureOutput(student_function, student_args);
            auto [eo, er] = captureOutput(solution_function, solution_args);
            studentOut = so; solutionOut = eo;
            stud_ret = sr; sol_ret = er;
        } else {
            stud_ret = student_function(student_args);
            sol_ret = solution_function(solution_args);
        }

        bool passed = true;

        if (check_params) {
            for (size_t i = 0; i < n; ++i) {
                comparison_strategies[i]->print(student_args[i], solution_args[i], i+1, "Param");
                if (!comparison_strategies[i]->compare(student_args[i], solution_args[i])) passed = false;
            }
        }

        if (check_output) {
            std::cout << "=== Your Output ===\n" << studentOut
                      << "=== Expected Output ===\n" << solutionOut;
            std::cout << (studentOut == solutionOut ? "[OUTPUT OK]\n" : "[OUTPUT DIFFERENT]\n");
            if (studentOut != solutionOut) passed = false;
        }

        if (check_return && return_comparer) {
            return_comparer->print(stud_ret, sol_ret, 0, "Return");
            if (!return_comparer->compare(stud_ret, sol_ret)) passed = false;
        }

        // Pulizia affidata interamente alle strategie
        for (size_t i = 0; i < n; ++i) {
            assignment_strategies[i]->cleanup(student_args[i]);
            assignment_strategies[i]->cleanup(solution_args[i]);
        }
        if (check_return && return_comparer) {
            return_comparer->cleanup(stud_ret);
            return_comparer->cleanup(sol_ret);
        }

        return passed;
    }
};

inline void runTests(std::vector<std::unique_ptr<UnifiedFunctionTester>>& tests) {
    for (size_t i = 0; i < tests.size(); ++i) {
        std::cout << "Test " << i+1 << "\n";
        std::cout << (tests[i]->run() ? "[PASSED]\n" : "[FAILED]\n");
        std::cout << "--------------------------------------\n";
    }
}

#endif // UNIFIEDFUNCTIONTESTER_H
