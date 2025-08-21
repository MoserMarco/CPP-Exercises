#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/25 - Random number.cpp"
#include "../Solutions/25 - Random number.cpp"

bool testFunctionSol(int min, int max) {
    cout<< "testing function 1000 times"<<endl;
    int rng =0 ;
    for (int i=0; i< 1000; i++) {
        rng = randomNumberSol(min, max);
        if (rng < min || rng> max) {
            cout<< "faild test "<< i << endl;
            return false;
        }
    }
    cout<< "function correctly tested 1000 times"<<endl;
    return true;
}
bool testFunction(int min, int max) {
    cout<< "testing function 1000 times"<<endl;
    int rng =0 ;
    for (int i=0; i< 1000; i++) {
        rng = randomNumber(min, max);
        if (rng < min || rng> max) {
            cout<< "faild test "<< i << endl;
            return false;
        }
    }
    cout<< "function correctly tested 1000 times"<<endl;
    return true;
}
struct parameters { int min; int max; };

std::unique_ptr<UnifiedFunctionTester> createRandomNumberTest(parameters params) {
    int* min_dynamic = new int(params.min);
    int* max_dynamic = new int(params.max);
    std::vector<void*> input_data = { min_dynamic, max_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<BoolReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            bool result = testFunction(*(int*)args[0],*(int*)args[1]);
            return new bool(result);
        },
        [](std::vector<void*>& args) -> void* {
            bool result = testFunctionSol(*(int*)args[0],*(int*)args[1]);
            return new bool(result);
        },
        std::move(return_strategy),
        true, true, true
    );
}

void testRandomNumber() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createRandomNumberTest({0,10}));
    tests.push_back(createRandomNumberTest({5,15}));
    tests.push_back(createRandomNumberTest({-7,3}));
    tests.push_back(createRandomNumberTest({-10,-2}));
    tests.push_back(createRandomNumberTest({8,8}));
    runTests(tests);
}

int main() {
    srand(time(NULL));
    testRandomNumber();
    return 0;
}