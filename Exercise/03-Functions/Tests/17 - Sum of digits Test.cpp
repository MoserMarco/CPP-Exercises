#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/17 - Sum of digits.cpp"
#include "../Solutions/17 - Sum of digits.cpp"

struct parameters { int n; };

std::unique_ptr<UnifiedFunctionTester> createSumOfDigitsTest(parameters params) {
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
            int result = sumDigits(*(int*)args[0]);
            return new int(result);
        },
        [](std::vector<void*>& args) -> void* {
            int result = sumDigitsSol(*(int*)args[0]);
            return new int(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testSumOfDigits() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createSumOfDigitsTest({81}));
    tests.push_back(createSumOfDigitsTest({12345}));
    tests.push_back(createSumOfDigitsTest({-4}));
    tests.push_back(createSumOfDigitsTest({0}));
    tests.push_back(createSumOfDigitsTest({-56}));
    runTests(tests);
}

int main() {
    testSumOfDigits();
    return 0;
}