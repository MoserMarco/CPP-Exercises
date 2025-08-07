//
// Created by admin on 07-Aug-25.
//

#ifndef VOIDFUNCTIONTESTER_H
#define VOIDFUNCTIONTESTER_H
#include <iostream>
#include <sstream>
#include <string>
#include <functional>
#include <tuple>

template<typename... Args>
class VoidFunctionTester {
private:
    std::function<void(Args...)> studentFunc;
    std::function<void(Args...)> solutionFunc;

    // Cattura l'output prodotto da una funzione
    std::string captureOutput(const std::function<void(Args...)>& func, Args... args) {
        std::streambuf* oldBuf = std::cout.rdbuf();
        std::ostringstream temp;
        std::cout.rdbuf(temp.rdbuf());

        func(std::forward<Args>(args)...);

        std::cout.rdbuf(oldBuf);
        return temp.str();
    }

    // Stampa i parametri come stringa
    std::string formatParams(Args... args) {
        std::ostringstream oss;
        oss << "(";
        ((oss << args << ", "), ...);
        std::string result = oss.str();
        if (sizeof...(Args) > 0) {
            result.pop_back(); // rimuove spazio
            result.pop_back(); // rimuove virgola
        }
        result += ")";
        return result;
    }

public:
    VoidFunctionTester(std::function<void(Args...)> student,
                       std::function<void(Args...)> solution)
        : studentFunc(student), solutionFunc(solution) {}

    void runTest(Args... args) {
        std::string paramStr = formatParams(args...);

        std::string studentOut = captureOutput(studentFunc, args...);
        std::string solutionOut = captureOutput(solutionFunc, args...);

        std::cout << "=== Running Test with Parameters: " << paramStr << " ===\n";
        std::cout << "=== Your Output  ===\n" << studentOut;
        std::cout << "=== Solution Output ===\n" << solutionOut;


        if (studentOut == solutionOut) {
            std::cout << "[PASSED]\n";
        } else {
            std::cout << "[FAILED]\n";
        }
        std::cout << "--------------------------------------\n";
    }
};
#endif //VOIDFUNCTIONTESTER_H
