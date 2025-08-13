#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/20 - Prime factorization.cpp"
#include "../Solutions/20 - Prime factorization.cpp"

struct parameters { int n; };

std::unique_ptr<UnifiedFunctionTester> createPrimeFactorizationTest(parameters params) {
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
            primeFactorization(*(int*)args[0]);
            return nullptr;
        },
        [](std::vector<void*>& args) -> void* {
            primeFactorizationSol(*(int*)args[0]);
            return nullptr;
        },
        nullptr,
        true, true, false
    );
}

void testPrimeFactorization() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createPrimeFactorizationTest({1}));
    tests.push_back(createPrimeFactorizationTest({15}));
    tests.push_back(createPrimeFactorizationTest({101}));
    tests.push_back(createPrimeFactorizationTest({150}));
    tests.push_back(createPrimeFactorizationTest({-7}));
    runTests(tests);
}
int main() {
    testPrimeFactorization();
    return 0;
}