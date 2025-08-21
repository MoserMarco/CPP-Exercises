
#ifndef FUNCTIONCOMPARISONRUNNER_H
#define FUNCTIONCOMPARISONRUNNER_H
#include <iostream>
#include <sstream>
#include <string>
#include <functional>
#include <tuple>
#include <type_traits>

template<typename ReturnType, typename... Args>
class FunctionComparisonRunner {
private:
    std::function<ReturnType(Args...)> studentFunc;
    std::function<ReturnType(Args...)> solutionFunc;


    std::string formatParams(Args... args) {
        std::ostringstream oss;
        oss << "(";
        ((oss << args << ", "), ...);
        std::string result = oss.str();
        if (sizeof...(Args) > 0) {
            result.pop_back();
            result.pop_back();
        }
        result += ")";
        return result;
    }


    template<typename T = ReturnType>
    typename std::enable_if<std::is_void<T>::value, void>::type
    printReturnValue(const std::string& who) {
        std::cout << who << " returned: void\n";
    }


    template<typename T = ReturnType>
    typename std::enable_if<!std::is_void<T>::value, void>::type
    printReturnValue(const std::string& who, const T& value) {
        std::cout << who << " returned: " << value << "\n";
    }

public:
    FunctionComparisonRunner(std::function<ReturnType(Args...)> student,
                             std::function<ReturnType(Args...)> solution)
        : studentFunc(student), solutionFunc(solution) {}

    void runTest(Args... args) {
        std::string paramStr = formatParams(args...);

        std::cout << "=== Running Test with Parameters: " << paramStr << " ===\n";

        std::cout << "--- Executing Your Function ---\n";
        if constexpr (std::is_void<ReturnType>::value) {
            studentFunc(std::forward<Args>(args)...);
            printReturnValue("Student Function");
        } else {
            ReturnType studentResult = studentFunc(std::forward<Args>(args)...);
            printReturnValue("Student Function", studentResult);
        }

        std::cout << "--- Executing Solution Function ---\n";
        if constexpr (std::is_void<ReturnType>::value) {
            solutionFunc(std::forward<Args>(args)...);
            printReturnValue("Solution Function");
        } else {
            ReturnType solutionResult = solutionFunc(std::forward<Args>(args)...);
            printReturnValue("Solution Function", solutionResult);
        }

        std::cout << "--------------------------------------\n";
    }
};

#endif // FUNCTIONCOMPARISONRUNNER_H