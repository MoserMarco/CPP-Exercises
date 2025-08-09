#include "../../../Automatic_Script_Test/TestCase.h"
#include "../Code/09 - Calculation of the greatest common divisor (GCD).cpp"
#include "../Solutions/09 - Calculation of the greatest common divisor (GCD).cpp"

struct parameters {
    int a;
    int b;

};

// Builds a test case with input parameters and return value
TestCase createTest(struct parameters params) {
    // Allocate input data dynamically
    int* a = new int(params.a);
    int* b = new int(params.b);

    std::vector<void*> input_data = {
        a,
        b
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
            int result = GCD(*(int*)args[0], *(int*)args[1]);
            return new int(result);
        },
        // Solution function
        [](std::vector<void*>& args) -> void* {
            int result = GCDSol(*(int*)args[0], *(int*)args[1]);
            return new int(result);
        },
        std::move(return_strategy)
    );

    return test;
}

// Runs all test cases for exponentiation
void testGCD() {
    std::vector<TestCase> Tests;
    Tests.push_back(createTest({12, 5}));
    Tests.push_back(createTest({115, 10}));
    Tests.push_back(createTest({34, 4}));
    Tests.push_back(createTest({1, 22}));
    Tests.push_back(createTest({6, 6}));
    runTests(Tests);
}

int main() {
    testGCD();
    return 0;
}