#include "../Code/14 - Isosceles trapezoid.cpp"
#include "../Solutions/14 - Isosceles trapezoid.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"

    struct parameters {
        int b;
        int l;
    };

std::unique_ptr<UnifiedFunctionTester> createIsoscelesTrapezoidTest(struct parameters params) {
    int* b_dynamic = new int(params.b);
    int* l_dynamic = new int(params.l);

    std::vector<void*> input_data = { b_dynamic, l_dynamic };

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
            trapezoid(*(int*)args[0], *(int*)args[1]);
            return nullptr;
        },
        [](std::vector<void*>& args) -> void* {
            trapezoidSol(*(int*)args[0], *(int*)args[1]);
            return nullptr;
        },
         nullptr,
        true, true, false
    );
}

void testIsoscelesTrapezoid() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> Tests;
    Tests.push_back(createIsoscelesTrapezoidTest({5, 3}));
    Tests.push_back(createIsoscelesTrapezoidTest({0, 2}));
    Tests.push_back(createIsoscelesTrapezoidTest({8, 4}));
    Tests.push_back(createIsoscelesTrapezoidTest({3, 0}));
    Tests.push_back(createIsoscelesTrapezoidTest({2, 9}));

    runTests(Tests);
}





int main() {
    testIsoscelesTrapezoid();
    return 0;
}