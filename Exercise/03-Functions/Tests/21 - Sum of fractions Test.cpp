#include "../Code/21 - Sum of fractions.cpp"
#include "../Solutions/21 - Sum of fractions.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"


struct parameters {
    int numerator1;
    int denominator1;
    int numerator2;
    int denominator2;
    int numeratorR;
    int denominatorR;
};


std::unique_ptr<UnifiedFunctionTester> createSumFractionsTest(struct parameters params) {
    int* numerator1_dynamic = new int(params.numerator1);
    int* denominator1_dynamic = new int(params.denominator1);
    int* numerator2_dynamic = new int(params.numerator2);
    int* denominator2_dynamic = new int(params.denominator2);
    int* numeratorR_dynamic = new int(params.numeratorR);
    int* denominatorR_dynamic = new int(params.denominatorR);

    std::vector<void*> input_data = { numerator1_dynamic, denominator1_dynamic, numerator2_dynamic, denominator2_dynamic, numeratorR_dynamic, denominatorR_dynamic };

    // Le strategie di assegnazione per parametri (pass-by-reference su int)
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    // Le strategie di confronto per parametri (vogliamo controllare che siano stati scambiati)
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    // Funzioni lambda per adattarsi al tester
    auto student_func = [](std::vector<void*>& args) -> void* {
        sumFractions(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4], *(int*)args[5]);
        return nullptr;  // funzione void, nessun valore di ritorno
    };

    auto solution_func = [](std::vector<void*>& args) -> void* {
        sumFractionsSol(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4], *(int*)args[5]);
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

void testSumFractions() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createSumFractionsTest({1, 2, 1, 3, 0, 0}));   // test semplice
    tests.push_back(createSumFractionsTest({-1, 4, 1, 4, 0, 0}));    // valori uguali
    tests.push_back(createSumFractionsTest({5, 6, -2, 3, 0, 0}));   // valori negativi e positivi
    tests.push_back(createSumFractionsTest({-3, 5, -2, 5, 0, 0})); // valori grandi e negativi
    tests.push_back(createSumFractionsTest({2, 7, -5, 14, 0, 0} )); // valori grandi e negativi
    runTests(tests);
}

int main() {
    testSumFractions();
    return 0;
}
