#include "../../../Automatic_Script_Test/TestCase.h"
#include "../Code/03 - Even or Odd Number.cpp"
#include "../Solutions/03 - Even or Odd Number.cpp"

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
            int result = isEven(*(int*)args[0]);
            return new int(result);
        },
        // Solution function
        [](std::vector<void*>& args) -> void* {
            int result = isEvenSol(*(int*)args[0]);
            return new int(result);
        },
        std::move(return_strategy)
    );

    return test;
}

// Runs all test cases for exponentiation
void testEvenOrOdd() {
    std::vector<TestCase> Tests;
    Tests.push_back(createTest({2}));
    Tests.push_back(createTest({1}));
    Tests.push_back(createTest({4}));
    Tests.push_back(createTest({71}));
    Tests.push_back(createTest({3}));
    runTests(Tests);
}

int main() {
    testEvenOrOdd();
    return 0;
}