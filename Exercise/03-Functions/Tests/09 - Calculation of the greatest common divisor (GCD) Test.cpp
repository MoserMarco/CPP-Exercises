#include "../Code/09 - Calculation of the greatest common divisor (GCD).cpp"
#include "../Solutions/09 - Calculation of the greatest common divisor (GCD).cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"

    struct parameters {
        int a;
        int b;
    };

    std::unique_ptr<UnifiedFunctionTester> createGCDTest(struct parameters params) {
        int* a_dynamic = new int(params.a);
        int* b_dynamic = new int(params.b);

        std::vector<void*> input_data = { a_dynamic, b_dynamic };

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
                int result = GCD(*(int*)args[0], *(int*)args[1]);
                return new int(result);
            },
            [](std::vector<void*>& args) -> void* {
                int result = GCDSol(*(int*)args[0], *(int*)args[1]);
                return new int(result);
            },
            std::move(return_strategy),
            true, false, true
        );
    }

    void testGCD() {
        std::vector<std::unique_ptr<UnifiedFunctionTester>> Tests;
        Tests.push_back(createGCDTest({12, 18}));
        Tests.push_back(createGCDTest({15, 15}));
        Tests.push_back(createGCDTest({101, 103}));
        Tests.push_back(createGCDTest({60, 48}));
        Tests.push_back(createGCDTest({81, 27}));

        runTests(Tests);
    }





int main() {
    testGCD();
    return 0;
}