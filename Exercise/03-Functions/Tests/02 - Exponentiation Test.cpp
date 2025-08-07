#include "../../../Automatic_Script_Test/TestCase.h"
#include "../Code/02 - Exponentiation.cpp"
#include "../Solutions/02 - Exponentiation.cpp"

struct parameters {
    int base;
    int exponent;
};

// Builds a test case with input parameters and return value
TestCase createTest(struct parameters params) {
    // Allocate input data dynamically
    int* base = new int(params.base);
    int* exp = new int(params.exponent);

    std::vector<void*> input_data = {
        base,
        exp
    };

    // Assignment strategies
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    // Comparison strategies
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    // Return value strategy
    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<IntReturnComparison>();

    // Create test case
    TestCase test(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        // Student function
        [](std::vector<void*>& args) -> void* {
            int result = exponentiation(*(int*)args[0], *(int*)args[1]);
            return new int(result);
        },
        // Solution function
        [](std::vector<void*>& args) -> void* {
            int result = exponentiationSol(*(int*)args[0], *(int*)args[1]);
            return new int(result);
        },
        std::move(return_strategy)
    );

    return test;
}

// Runs all test cases for exponentiation
void testExponentiation() {
    std::vector<TestCase> Tests;
    Tests.push_back(createTest({2, 4}));
    Tests.push_back(createTest({1, 0}));
    Tests.push_back(createTest({4, -3}));
    Tests.push_back(createTest({-1, 3}));
    Tests.push_back(createTest({3, -1}));
    runTests(Tests);
}

int main() {
    testExponentiation();
    return 0;
}