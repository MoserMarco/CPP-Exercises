#include "../Code/16 - Swap two numbers.cpp"
#include "../Solutions/16 - Swap two numbers.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"


struct parameters {
    int a;
    int b;
};


std::unique_ptr<UnifiedFunctionTester> createSwapTest(struct parameters params) {
    int* a_dynamic = new int(params.a);
    int* b_dynamic = new int(params.b);

    std::vector<void*> input_data = { a_dynamic, b_dynamic };

    // Le strategie di assegnazione per parametri (pass-by-reference su int)
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    // Le strategie di confronto per parametri (vogliamo controllare che siano stati scambiati)
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    // Funzioni lambda per adattarsi al tester
    auto student_func = [](std::vector<void*>& args) -> void* {
        swap(*(int*)args[0], *(int*)args[1]);
        return nullptr;  // funzione void, nessun valore di ritorno
    };

    auto solution_func = [](std::vector<void*>& args) -> void* {
        swapSol(*(int*)args[0], *(int*)args[1]);
        return nullptr;
    };

    // Creiamo UnifiedFunctionTester disabilitando il controllo sul valore di ritorno
    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        student_func,
        solution_func,
        nullptr,     // nessun confronto su return
        true,       // check params (controlliamo parametri dopo la swap)
        false,      // no output da controllare
        false       // no return da controllare
    );
}

void testSwap() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createSwapTest({5, 10}));   // test semplice
    tests.push_back(createSwapTest({0, 0}));    // valori uguali
    tests.push_back(createSwapTest({-1, 1}));   // valori negativi e positivi
    tests.push_back(createSwapTest({100, -100})); // valori grandi e negativi
    tests.push_back(createSwapTest({4, -5})); // valori grandi e negativi
    runTests(tests);
}

int main() {
    testSwap();
    return 0;
}
