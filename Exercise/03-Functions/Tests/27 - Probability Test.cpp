#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/27 - Probability.cpp"
#include "../Solutions/27 - Probability.cpp"

struct parameters { int n;};

std::unique_ptr<UnifiedFunctionTester> createProbabilityTest(parameters params) {
    int* n_dynamic = new int(params.n);


    std::vector<void*> input_data = { n_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;

    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());


    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;

    comparison_strategies.push_back(std::make_unique<IntValueComparison>());


    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<DoubleReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            double result = probability(*(int*)args[0]);
            return new double(result);
        },
        [](std::vector<void*>& args) -> void* {
            double result = probabilitySol(*(int*)args[0]);
            return new double(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testProbability() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createProbabilityTest({0}));
    tests.push_back(createProbabilityTest({1}));
    tests.push_back(createProbabilityTest({3}));
    tests.push_back(createProbabilityTest({4}));
    tests.push_back(createProbabilityTest({5}));
    runTests(tests);
}

int main() {
    srand(time(NULL));
    testProbability();
    return 0;
}