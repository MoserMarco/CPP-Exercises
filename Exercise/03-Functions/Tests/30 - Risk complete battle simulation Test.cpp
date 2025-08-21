#include "../../../Automatic_Script_Test/FunctionComparisonRunner.h"
#include "../Solutions/30 - Risk complete battle simulation.cpp"
#include "../Code/30 - Risk complete battle simulation.cpp"
void testRisk() {
    FunctionComparisonRunner<int, int, int> runner(risk ,riskSol);
    runner.runTest(8, 5);
    runner.runTest(20, 5);
}

int main() {
    srand(time(NULL));
    testRisk();
    return 0;
}
