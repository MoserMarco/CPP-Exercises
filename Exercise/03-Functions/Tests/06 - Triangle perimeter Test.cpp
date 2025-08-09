#include "../../../Automatic_Script_Test/TestCase.h"
#include "../Code/06 - Triangle perimeter.cpp"
#include "../Solutions/06 - Triangle perimeter.cpp"

struct parameters {
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
};

// Builds a test case with input parameters and return value
TestCase createTest(struct parameters params) {
    // Allocate input data dynamically
    int* x1 = new int(params.x1);
    int* y1 = new int(params.y1);
    int* x2 = new int(params.x2);
    int* y2 = new int(params.y2);
    int* x3 = new int(params.x3);
    int* y3 = new int(params.y3);
    std::vector<void*> input_data = {
        x1,y1,x2,y2,x3,y3
    };

    // Assignment strategies
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    // Comparison strategies
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
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
            int result = perimeter(*(int*)args[0], *(int*)args[1], *(int*)args[2],*(int*)args[3], *(int*)args[4], *(int*)args[5]);
            return new int(result);
        },
        // Solution function
        [](std::vector<void*>& args) -> void* {
            int result = perimeterSol(*(int*)args[0], *(int*)args[1], *(int*)args[2],*(int*)args[3], *(int*)args[4], *(int*)args[5]);
            return new int(result);
        },
        std::move(return_strategy)
    );

    return test;
}

// Runs all test cases for exponentiation
void testDifference() {
    std::vector<TestCase> Tests;
    Tests.push_back(createTest({2, 4, 7,2, 4, 7}));
    Tests.push_back(createTest({1, 0, -1, -4, 6 , 2}));
    Tests.push_back(createTest({14,14, 14, -1, 1, 0}));
    Tests.push_back(createTest({0, 0, 0,3,4,0}));
    Tests.push_back(createTest({-3, -1,0,0,4,5}));
    runTests(Tests);
}

int main() {
    testDifference();
    return 0;
}