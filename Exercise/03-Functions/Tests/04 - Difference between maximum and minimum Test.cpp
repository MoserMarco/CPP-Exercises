#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/04 - Difference between maximum and minimum.cpp"
#include "../Solutions/04 - Difference between maximum and minimum.cpp"

struct parameters { int n1, n2, n3; };

std::unique_ptr<UnifiedFunctionTester> createDifferenceTest(parameters params) {
    int* n1 = new int(params.n1);
    int* n2 = new int(params.n2);
    int* n3 = new int(params.n3);

    std::vector<void*> input_data = { n1, n2, n3 };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<IntReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            int result = difference(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
            return new int(result);
        },
        [](std::vector<void*>& args) -> void* {
            int result = differenceSol(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
            return new int(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testDifference() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createDifferenceTest({6, 12, 2}));
    tests.push_back(createDifferenceTest({5, 5, 5}));
    tests.push_back(createDifferenceTest({-1, 0, 1}));
    tests.push_back(createDifferenceTest({10, 20, 30}));
    tests.push_back(createDifferenceTest({14, 45, 14}));
    runTests(tests);
}
int main() {
    testDifference();
    return 0;
}