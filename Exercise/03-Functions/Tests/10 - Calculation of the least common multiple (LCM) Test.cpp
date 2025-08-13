#include "../Code/10 - Calculation of the least common multiple (LCM).cpp"
#include "../Solutions/10 - Calculation of the least common multiple (LCM).cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"

    struct parameters {
        int a;
        int b;
    };

    std::unique_ptr<UnifiedFunctionTester> createLCMTest(struct parameters params) {
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
                int result = LCM(*(int*)args[0], *(int*)args[1]);
                return new int(result);
            },
            [](std::vector<void*>& args) -> void* {
                int result = LCMSol(*(int*)args[0], *(int*)args[1]);
                return new int(result);
            },
            std::move(return_strategy),
            true, false, true
        );
    }

    void testLCM() {
        std::vector<std::unique_ptr<UnifiedFunctionTester>> Tests;
        Tests.push_back(createLCMTest({2, 5}));
        Tests.push_back(createLCMTest({13, 17}));
        Tests.push_back(createLCMTest({15, 20}));
        Tests.push_back(createLCMTest({1, 7}));
        Tests.push_back(createLCMTest({6, 6}));

        runTests(Tests);
    }





int main() {
    testLCM();
    return 0;
}