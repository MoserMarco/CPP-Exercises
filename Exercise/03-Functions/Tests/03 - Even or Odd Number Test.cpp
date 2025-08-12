#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/03 - Even or Odd Number.cpp"
#include "../Solutions/03 - Even or Odd Number.cpp"

struct parameters { int n; };

std::unique_ptr<UnifiedFunctionTester> createIsEvenTest(parameters params) {
    int* n_dynamic = new int(params.n);
    std::vector<void*> input_data = { n_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<BoolReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            bool result = isEven(*(int*)args[0]);
            return new bool(result);
        },
        [](std::vector<void*>& args) -> void* {
            bool result = isEvenSol(*(int*)args[0]);
            return new bool(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testEvenOrOdd() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createIsEvenTest({2}));
    tests.push_back(createIsEvenTest({1}));
    tests.push_back(createIsEvenTest({4}));
    tests.push_back(createIsEvenTest({0}));
    tests.push_back(createIsEvenTest({71}));
    runTests(tests);
}

int main() {
    testEvenOrOdd();
    return 0;
}