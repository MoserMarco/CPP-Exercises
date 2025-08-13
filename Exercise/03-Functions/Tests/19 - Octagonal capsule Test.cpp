#include "../Code/19 - Octagonal capsule.cpp"
#include "../Solutions/19 - Octagonal capsule.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"

    struct parameters {
        int n;

    };

std::unique_ptr<UnifiedFunctionTester> createOcatagonalCapsuleTest(struct parameters params) {
    int* n_dynamic = new int(params.n);


    std::vector<void*> input_data = { n_dynamic };

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
            capsule(*(int*)args[0]);
            return nullptr;
        },
        [](std::vector<void*>& args) -> void* {
            capsuleSol(*(int*)args[0]);
            return nullptr;
        },
         nullptr,
        true, true, false
    );
}

void testOcatagonalCapsule() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> Tests;
    Tests.push_back(createOcatagonalCapsuleTest({0}));
    Tests.push_back(createOcatagonalCapsuleTest({1}));
    Tests.push_back(createOcatagonalCapsuleTest({4}));
    Tests.push_back(createOcatagonalCapsuleTest({7}));
    Tests.push_back(createOcatagonalCapsuleTest({2}));

    runTests(Tests);
}





int main() {
    testOcatagonalCapsule();
    return 0;
}