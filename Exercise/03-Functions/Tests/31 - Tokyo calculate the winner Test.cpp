
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/31 - Tokyo calculate the winner.cpp"
#include "../Solutions/31 - Tokyo calculate the winner.cpp"

struct parameters { int p1d1,  p1d2,  p2d1,  p2d2; };

std::unique_ptr<UnifiedFunctionTester> createTokyoTest(parameters params) {
    int* p1d1_dynamic = new int(params.p1d1);
    int* p1d2_dynamic = new int(params.p1d2);
    int* p2d1_dynamic = new int(params.p2d1);
    int* p2d2_dynamic = new int(params.p2d2);





    std::vector<void*> input_data = { p1d1_dynamic, p1d2_dynamic, p2d1_dynamic, p2d2_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());



    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<IntReturnComparison>();



    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {

            int result = tokyo(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
            return new int(result);
        },
        [](std::vector<void*>& args) -> void* {
            int result = tokyoSol(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
            return new int(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testTokyo() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createTokyoTest({1, 2, 3, 4}));
    tests.push_back(createTokyoTest({2, 2, 3, 3}));
    tests.push_back(createTokyoTest({4, 5, 3, 6}));
    tests.push_back(createTokyoTest({6, 6, 5, 5}));
    tests.push_back(createTokyoTest({1, 2, 2, 1}));
    runTests(tests);
}
int main() {
    testTokyo();
    return 0;
}