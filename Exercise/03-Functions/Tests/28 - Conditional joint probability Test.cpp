#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/28 - Conditional joint probability.cpp"
#include "../Solutions/28 - Conditional joint probability.cpp"

struct parameters { int t,  n;};

std::unique_ptr<UnifiedFunctionTester> createConditionalJointProbabilityTest(parameters params) {
    int* t_dynamic = new int(params.t);
    int* n_dynamic = new int(params.n);


    std::vector<void*> input_data = { t_dynamic,n_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;

    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());


    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;

    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());


    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<DoubleReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            double result = jointProbability(*(int*)args[0], *(int*)args[1]);
            return new double(result);
        },
        [](std::vector<void*>& args) -> void* {
            double result = jointProbabilitySol(*(int*)args[0], *(int*)args[1]);
            return new double(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testConditionalJointProbability() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createConditionalJointProbabilityTest({2,6}));
    tests.push_back(createConditionalJointProbabilityTest({5,6}));
    tests.push_back(createConditionalJointProbabilityTest({0,1}));
    tests.push_back(createConditionalJointProbabilityTest({3,10}));
    tests.push_back(createConditionalJointProbabilityTest({-2,4}));
    runTests(tests);
}

int main() {
    srand(time(NULL));
    testConditionalJointProbability();
    return 0;
}