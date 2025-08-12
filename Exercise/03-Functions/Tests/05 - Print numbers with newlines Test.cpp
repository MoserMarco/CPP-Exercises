#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/05 - Print numbers with newlines.cpp"
#include "../Solutions/05 - Print numbers with newlines.cpp"

struct parameters { int n; };

std::unique_ptr<UnifiedFunctionTester> createNumbersWithNewlinesTest(parameters params) {
    int* n_dynamic = new int(params.n);

    std::vector<void*> input_data = { n_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            numbersWithNewlines(*(int*)args[0]);
            return nullptr;
        },
        [](std::vector<void*>& args) -> void* {
            numbersWithNewlinesSol(*(int*)args[0]);
            return nullptr;
        },
        nullptr,
        true, true, false
    );
}

void testNumbersWithNewlines() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createNumbersWithNewlinesTest({5}));
    tests.push_back(createNumbersWithNewlinesTest({11}));
    tests.push_back(createNumbersWithNewlinesTest({45}));
    tests.push_back(createNumbersWithNewlinesTest({3}));
    tests.push_back(createNumbersWithNewlinesTest({1}));
    runTests(tests);
}
int main() {
    testNumbersWithNewlines();
    return 0;
}