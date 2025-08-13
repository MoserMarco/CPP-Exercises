#include "../Code/22 - Largest prime factor.cpp"
#include "../Solutions/22 - Largest prime factor.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"


struct parameters {
    int n;
    int factor;
    int occurency;

};


std::unique_ptr<UnifiedFunctionTester> createPrimeFactorTest(struct parameters params) {
    int* n_dynamic = new int(params.n);
    int* factor_dynamic = new int(params.factor);
    int* occurency_dynamic = new int(params.occurency);


    std::vector<void*> input_data = { n_dynamic, factor_dynamic, occurency_dynamic };

    // Le strategie di assegnazione per parametri (pass-by-reference su int)
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());


    // Le strategie di confronto per parametri (vogliamo controllare che siano stati scambiati)
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());


    // Funzioni lambda per adattarsi al tester
    auto student_func = [](std::vector<void*>& args) -> void* {
        primeFactor(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
        return nullptr;  // funzione void, nessun valore di ritorno
    };

    auto solution_func = [](std::vector<void*>& args) -> void* {
        primeFactorSol(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
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

void testPrimeFactor() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createPrimeFactorTest({48, 0, 0}));   // test semplice
    tests.push_back(createPrimeFactorTest({1, 0, 0}));    // valori uguali
    tests.push_back(createPrimeFactorTest({97, 0, 0}));   // valori negativi e positivi
    tests.push_back(createPrimeFactorTest({2048, 0, 0})); // valori grandi e negativi
    tests.push_back(createPrimeFactorTest({144, 0, 0} )); // valori grandi e negativi
    runTests(tests);
}

int main() {
    testPrimeFactor();
    return 0;
}
