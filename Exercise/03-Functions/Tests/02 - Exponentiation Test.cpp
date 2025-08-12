#include "../Code/02 - Exponentiation.cpp"
#include "../Solutions/02 - Exponentiation.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"

struct parameters {
    int base;
    int exponent;
};

std::unique_ptr<UnifiedFunctionTester> createTest(struct parameters params) {
    int* base_dynamic = new int(params.base);
    int* exp_dynamic = new int(params.exponent);

    std::vector<void*> input_data = { base_dynamic, exp_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<IntReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            int result = exponentiation(*(int*)args[0], *(int*)args[1]);
            return new int(result);
        },
        [](std::vector<void*>& args) -> void* {
            int result = exponentiationSol(*(int*)args[0], *(int*)args[1]);
            return new int(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testExponentiation() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> Tests;
    Tests.push_back(createTest({2, 4}));
    Tests.push_back(createTest({1, 0}));
    Tests.push_back(createTest({4, -3}));
    Tests.push_back(createTest({-2, 3}));
    Tests.push_back(createTest({3, -1}));

    runTests(Tests);
}

int main() {
    testExponentiation();
    return 0;
}
