#include "../../../Automatic_Script_Test/TestCase.h"
#include "../Code/07 - Prime number with a function.cpp"
#include "../Solutions/07 - Prime number with a function.cpp"

struct parameters {
    int n;

};

// Builds a test case with input parameters and return value
TestCase createTest(struct parameters params) {
    // Allocate input data dynamically
    int* n = new int(params.n);


    std::vector<void*> input_data = {
        n
    };

    // Assignment strategies
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());


    // Comparison strategies
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());


    // Return value strategy
    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<BoolReturnComparison>();

    // Create test case
    TestCase test(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        // Student function
        [](std::vector<void*>& args) -> void* {
            int result = isPrime(*(int*)args[0]);
            return new int(result);
        },
        // Solution function
        [](std::vector<void*>& args) -> void* {
            int result = isPrimeSol(*(int*)args[0]);
            return new int(result);
        },
        std::move(return_strategy)
    );

    return test;
}

// Runs all test cases for exponentiation
void testIsPrime() {
    std::vector<TestCase> Tests;
    Tests.push_back(createTest({8}));
    Tests.push_back(createTest({1}));
    Tests.push_back(createTest({4}));
    Tests.push_back(createTest({71}));
    Tests.push_back(createTest({3}));
    runTests(Tests);
}

int main() {
    testIsPrime();
    return 0;
}