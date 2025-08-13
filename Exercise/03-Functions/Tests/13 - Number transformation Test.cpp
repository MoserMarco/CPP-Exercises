#include "../Code/13 - Number transformation.cpp"
#include "../Solutions/13 - Number transformation.cpp"
#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"


struct parameters {
    float n1;
    float n2;
};


std::unique_ptr<UnifiedFunctionTester> createTransformationTest(struct parameters params) {
    float* n1_dynamic = new float(params.n1);
    float* n2_dynamic = new float(params.n2);

    std::vector<void*> input_data = { n1_dynamic, n2_dynamic };

    // Le strategie di assegnazione per parametri (pass-by-reference su int)
    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<FloatValueAssignment>());
    assignment_strategies.push_back(std::make_unique<FloatValueAssignment>());

    // Le strategie di confronto per parametri (vogliamo controllare che siano stati scambiati)
    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<FloatValueComparison>());
    comparison_strategies.push_back(std::make_unique<FloatValueComparison>());

    // Funzioni lambda per adattarsi al tester
    auto student_func = [](std::vector<void*>& args) -> void* {
        transformation(*(float*)args[0], *(float*)args[1]);
        return nullptr;  // funzione void, nessun valore di ritorno
    };

    auto solution_func = [](std::vector<void*>& args) -> void* {
        transformationSol(*(float*)args[0], *(float*)args[1]);
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

void testTransformation() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createTransformationTest({5, 10}));   // test semplice
    tests.push_back(createTransformationTest({0, 0}));    // valori uguali
    tests.push_back(createTransformationTest({-1, 1}));   // valori negativi e positivi
    tests.push_back(createTransformationTest({100, -100})); // valori grandi e negativi
    tests.push_back(createTransformationTest({4, -5})); // valori grandi e negativi
    runTests(tests);
}

int main() {
    testTransformation();
    return 0;
}
