#include "../../../Automatic_Script_Test/FunctionComparisonRunner.h"
#include "../Solutions/26 - Multiplication tables.cpp"
#include "../Code/26 - Multiplication tables.cpp"
void testMultiplicationTables() {
    FunctionComparisonRunner<void, int, int> runner(tables ,tablesSol);
    runner.runTest(10, 10);
}

int main() {
    srand(time(NULL));
    testMultiplicationTables();
    return 0;
}
