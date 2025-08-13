#include "../Code/11 - Print an uppercase M.cpp"
#include "../Solutions/11 - Print an uppercase M.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"

    struct parameters {
        int height;

    };

std::unique_ptr<UnifiedFunctionTester> createPrintUppercaseMTest(struct parameters params) {
    int* height_dynamic = new int(params.height);


    std::vector<void*> input_data = { height_dynamic };

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
            printM(*(int*)args[0]);
            return nullptr;
        },
        [](std::vector<void*>& args) -> void* {
            printMSol(*(int*)args[0]);
            return nullptr;
        },
         nullptr,
        true, true, false
    );
}

void testPrintUppercaseM() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> Tests;
    Tests.push_back(createPrintUppercaseMTest({5}));
    Tests.push_back(createPrintUppercaseMTest({3}));
    Tests.push_back(createPrintUppercaseMTest({13}));
    Tests.push_back(createPrintUppercaseMTest({7}));
    Tests.push_back(createPrintUppercaseMTest({8}));

    runTests(Tests);
}





int main() {
    testPrintUppercaseM();
    return 0;
}