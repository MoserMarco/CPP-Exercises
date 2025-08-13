#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/24 - Palindrome check.cpp"
#include "../Solutions/24 - Palindrome check.cpp"

struct parameters { int n; };

std::unique_ptr<UnifiedFunctionTester> createIsPalindormeTest(parameters params) {
    int* n_dynamic = new int(params.n);
    std::vector<void*> input_data = { n_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<BoolReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            bool result = isPalindrome(*(int*)args[0]);
            return new bool(result);
        },
        [](std::vector<void*>& args) -> void* {
            bool result = isPalindromeSol(*(int*)args[0]);
            return new bool(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testIsPalindrome() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createIsPalindormeTest({-1221}));
    tests.push_back(createIsPalindormeTest({12321 }));
    tests.push_back(createIsPalindormeTest({-12345}));
    tests.push_back(createIsPalindormeTest({3 }));
    tests.push_back(createIsPalindormeTest({98769 }));
    runTests(tests);
}

int main() {
    testIsPalindrome();
    return 0;
}