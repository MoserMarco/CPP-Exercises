#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/18 - Divisible by 3.cpp"
#include "../Solutions/18 - Divisible by 3.cpp"

struct parameters { int n; };

std::unique_ptr<UnifiedFunctionTester> createDivisibleBy3Test(parameters params) {
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
            divisible3(*(int*)args[0]);
            return nullptr;
        },
        [](std::vector<void*>& args) -> void* {
            divisible3Sol(*(int*)args[0]);
            return nullptr;
        },
        nullptr,
        true, true, false
    );
}

void testDivisibleBy3() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createDivisibleBy3Test({-4}));
    tests.push_back(createDivisibleBy3Test({15}));
    tests.push_back(createDivisibleBy3Test({0}));
    tests.push_back(createDivisibleBy3Test({50}));
    tests.push_back(createDivisibleBy3Test({7}));
    runTests(tests);
}
int main() {
    testDivisibleBy3();
    return 0;
}