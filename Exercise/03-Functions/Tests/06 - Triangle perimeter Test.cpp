#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/06 - Triangle perimeter.cpp"
#include "../Solutions/06 - Triangle perimeter.cpp"

struct parameters { double x1, y1, x2, y2, x3, y3; };

std::unique_ptr<UnifiedFunctionTester> createPerimeterTest(parameters params) {
    double* x1 = new double(params.x1);
    double* y1 = new double(params.y1);
    double* x2 = new double(params.x2);
    double* y2 = new double(params.y2);
    double* x3 = new double(params.x3);
    double* y3 = new double(params.y3);

    std::vector<void*> input_data = { x1, y1, x2, y2, x3, y3 };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    for (int i = 0; i < 6; i++) {
        assignment_strategies.push_back(std::make_unique<DoubleValueAssignment>());
    }

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    for (int i = 0; i < 6; i++) {
        comparison_strategies.push_back(std::make_unique<DoubleValueComparison>());
    }

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<DoubleReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            double result = perimeter(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3], *(double*)args[4], *(double*)args[5]);
            return new double(result);
        },
        [](std::vector<void*>& args) -> void* {
            double result = perimeterSol(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3], *(double*)args[4], *(double*)args[5]);
            return new double(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}

void testPerimeter() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createPerimeterTest({0,0,3,0,0,4}));
    tests.push_back(createPerimeterTest({1,1,1,4,4,1}));
    tests.push_back(createPerimeterTest({-1,-1,2,3,4,5}));
    tests.push_back(createPerimeterTest({0,0,0,0,0,0}));
    tests.push_back(createPerimeterTest({-3, -1,0,0,4,5}));
    runTests(tests);
}

int main() {
    testPerimeter();
    return 0;
}