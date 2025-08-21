
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/29 - Risk comparing dice.cpp"
#include "../Solutions/29 - Risk comparing dice.cpp"

struct parameters { int d11,  d12,  d13,  d21,  d22,  d23,  p1lost,  p2lost; };

std::unique_ptr<UnifiedFunctionTester> createRiskRoundTest(parameters params) {
    int* d11_dynamic = new int(params.d11);
    int* d12_dynamic = new int(params.d12);
    int* d13_dynamic = new int(params.d13);
    int* d21_dynamic = new int(params.d21);
    int* d22_dynamic = new int(params.d22);
    int* d23_dynamic = new int(params.d23);
    int* p1lost_dynamic = new int(params.p1lost);
    int* p2lost_dynamic = new int(params.p2lost);




    std::vector<void*> input_data = { d11_dynamic, d12_dynamic, d13_dynamic, d21_dynamic, d22_dynamic, d23_dynamic, p1lost_dynamic, p2lost_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());


    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());



    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            riskRound(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4], *(int*)args[5],*(int*)args[6], *(int*)args[7]);
            return nullptr;
        },
        [](std::vector<void*>& args) -> void* {
            riskRoundSol(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4], *(int*)args[5],*(int*)args[6], *(int*)args[7]);
            return nullptr;
        },
        nullptr,
        true, false, true
    );
}

void testRiskRound() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createRiskRoundTest({6, 5, 3, 6, 4, 2,0,0}));
    tests.push_back(createRiskRoundTest({1, 2, 3, 6, 5, 4,0,0}));
    tests.push_back(createRiskRoundTest({4, 4, 4, 1, 1, 1,0,0}));
    tests.push_back(createRiskRoundTest({6, 6, 1, 6, 6, 6,0,0}));
    tests.push_back(createRiskRoundTest({5, 2, 1, 4, 3, 2,0,0}));
    runTests(tests);
}
int main() {
    testRiskRound();
    return 0;
}