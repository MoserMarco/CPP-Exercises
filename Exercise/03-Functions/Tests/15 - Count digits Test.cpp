#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/15 - Count digits.cpp"
#include "../Solutions/15 - Count digits.cpp"

struct parameters { int n; };

std::unique_ptr<UnifiedFunctionTester> createCountDigitsTest(parameters params) {
    int* n_dynamic = new int(params.n);
    std::vector<void*> input_data = { n_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<IntReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            int result = countDigits(*(int*)args[0]);
            return new int(result);
        },
        [](std::vector<void*>& args) -> void* {
            int result = countDigitsSol(*(int*)args[0]);
            return new int(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testCountDigits() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createCountDigitsTest({81}));
    tests.push_back(createCountDigitsTest({12345}));
    tests.push_back(createCountDigitsTest({-4}));
    tests.push_back(createCountDigitsTest({0}));
    tests.push_back(createCountDigitsTest({-56}));
    runTests(tests);
}

int main() {
    testCountDigits();
    return 0;
}