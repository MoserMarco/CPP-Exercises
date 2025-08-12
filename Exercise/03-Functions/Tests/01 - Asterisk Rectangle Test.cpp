#include "../Code/01 - Asterisk Rectangle.cpp"
#include "../Solutions/01 - Asterisk Rectangle.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"

    struct parameters {
        int base;
        int height;
    };

    std::unique_ptr<UnifiedFunctionTester> createTest(struct parameters params) {
        int* base_dynamic = new int(params.base);
        int* height_dynamic = new int(params.height);

        std::vector<void*> input_data = { base_dynamic, height_dynamic };

        std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
        assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
        assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

        std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
        comparison_strategies.push_back(std::make_unique<IntValueComparison>());
        comparison_strategies.push_back(std::make_unique<IntValueComparison>());


        return std::make_unique<UnifiedFunctionTester>(
            input_data,
            std::move(assignment_strategies),
            std::move(comparison_strategies),
            [](std::vector<void*>& args) -> void* {
                asteriskRectangle(*(int*)args[0], *(int*)args[1]);
                return nullptr;
            },
            [](std::vector<void*>& args) -> void* {
                asteriskRectangleSol(*(int*)args[0], *(int*)args[1]);
                return nullptr;
            },
             nullptr,
            true, true, false
        );
    }

    void testAsteriskRetangle() {
        std::vector<std::unique_ptr<UnifiedFunctionTester>> Tests;
        Tests.push_back(createTest({5, 3}));
        Tests.push_back(createTest({7, 2}));
        Tests.push_back(createTest({8, 4}));
        Tests.push_back(createTest({3, 3}));
        Tests.push_back(createTest({2, 9}));

        runTests(Tests);
    }





int main() {
    testAsteriskRetangle();
    return 0;
}