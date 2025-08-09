#include "../../../Automatic_Script_Test/TestCase.h"
#include "../Code/10 - Calculation of the least common multiple (LCM).cpp"
#include "../Solutions/10 - Calculation of the least common multiple (LCM).cpp"

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
            int result = LCM(*(int*)args[0], *(int*)args[1]);
            return new int(result);
        },
        // Solution function
        [](std::vector<void*>& args) -> void* {
            int result = LCMSol(*(int*)args[0], *(int*)args[1]);
            return new int(result);
        },
        std::move(return_strategy)
    );

    return test;
}

// Runs all test cases for exponentiation
void testLCM() {
    std::vector<TestCase> Tests;
    Tests.push_back(createTest({2, 5}));
    Tests.push_back(createTest({15, 13}));
    Tests.push_back(createTest({15, 20}));
    Tests.push_back(createTest({1, 7}));
    Tests.push_back(createTest({6, 6}));
    runTests(Tests);
}

int main() {
    testLCM();
    return 0;
}