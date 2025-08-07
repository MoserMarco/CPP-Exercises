//
// Created by admin on 05-Aug-25.
//

#ifndef TESTCASE_H
#define TESTCASE_H

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <memory>
#include "AssignmentStrategy.h"
#include "ComparisonStrategy.h"

using TestFunction = std::function<void*(std::vector<void*>&)>;

class TestCase {
    std::vector<void*> input_data; // initial input values
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;

    TestFunction student_function;
    TestFunction solution_function;

    std::unique_ptr<ComparisonStrategy> return_comparer;
    bool has_return_value = false;

public:
    TestCase(
        std::vector<void*> input_data,
        std::vector<std::unique_ptr<AssignmentStrategy>> assigners,
        std::vector<std::unique_ptr<ComparisonStrategy>> comparers,
        TestFunction student_func,
        TestFunction solution_func,
        std::unique_ptr<ComparisonStrategy> return_comparer = nullptr
    ) :
        input_data(std::move(input_data)),
        student_function(std::move(student_func)),
        solution_function(std::move(solution_func)),
        return_comparer(std::move(return_comparer))
    {
        has_return_value = this->return_comparer != nullptr;

        for (auto& a : assigners)
            assignment_strategies.push_back(std::move(a));

        for (auto& c : comparers)
            comparison_strategies.push_back(std::move(c));
    }

    bool run() const{
        size_t n = input_data.size();
        std::vector<void*> student_args(n);
        std::vector<void*> solution_args(n);

        // Assign inputs for both student and reference function
        for (size_t i = 0; i < n; ++i) {
            assignment_strategies[i]->assign(&student_args[i], input_data[i]);
            assignment_strategies[i]->assign(&solution_args[i], input_data[i]);
        }

        // Call both functions and capture return values
        void* student_return = nullptr;
        void* solution_return = nullptr;

        if (has_return_value) {
            student_return = student_function(student_args);
            solution_return = solution_function(solution_args);
        } else {
            student_function(student_args);
            solution_function(solution_args);
        }

        // Compare all parameters
        bool passed = true;
        for (size_t i = 0; i < n; ++i) {
            comparison_strategies[i]->print(student_args[i], solution_args[i], i +1, "Param");
            if (!comparison_strategies[i]->compare(student_args[i], solution_args[i])) {
                passed = false;
            }
        }

        // Compare return value if applicable
        if (has_return_value) {
            return_comparer->print(student_return, solution_return, 0, "Return");
            if (!return_comparer->compare(student_return, solution_return)) {
                passed = false;
            }

            delete (int*)student_return;
            delete (int*)solution_return;
        }

        // Clean up parameters
        for (size_t i = 0; i < n; ++i) {
            delete (int*)student_args[i];
            delete (int*)solution_args[i];
        }

        return passed;
    }
};
inline void runTests(const std::vector<TestCase>& tests) {
    for (size_t i = 0; i < tests.size(); ++i) {
        std::cout << "Test " << i + 1 << "\n";
        if (tests[i].run()) {
            std::cout << "[PASSED]\n";
        } else {
            std::cout << "[FAILED]\n";
        }
        std::cout << "--------------------------------------\n";
    }
}

#endif //TESTCASE_H
