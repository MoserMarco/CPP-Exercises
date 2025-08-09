#include "../../../Automatic_Script_Test/TestCase.h"
#include "../Code/04 - Difference between maximum and minimum.cpp"
#include "../Solutions/04 - Difference between maximum and minimum.cpp"

struct parameters {
    int n1;
    int n2;
    int n3;
};

// Builds a test case with input parameters and return value
TestCase createTest(struct parameters params) {
    // Allocate input data dynamically
    int* n1 = new int(params.n1);
    int* n2 = new int(params.n2);
    int* n3 = new int(params.n3);
    std::vector<void*> input_data = {
        n1,
        n2,
        n3
    };

    // Assignment strategies
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    // Comparison strategies
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
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
            int result = difference(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
            return new int(result);
        },
        // Solution function
        [](std::vector<void*>& args) -> void* {
            int result = differenceSol(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
            return new int(result);
        },
        std::move(return_strategy)
    );

    return test;
}

// Runs all test cases for exponentiation
void testDifference() {
    std::vector<TestCase> Tests;
    Tests.push_back(createTest({2, 4, 7}));
    Tests.push_back(createTest({1, 0, -1}));
    Tests.push_back(createTest({14,14, 14}));
    Tests.push_back(createTest({-7, -1, -3}));
    Tests.push_back(createTest({-3, -1,0}));
    runTests(Tests);
}

int main() {
    testDifference();
    return 0;
}