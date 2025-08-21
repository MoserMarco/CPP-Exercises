#include "../../../Automatic_Script_Test/FunctionComparisonRunner.h"
#include "../Solutions/32 - Tokyo single round.cpp"
#include "../Code/32 - Tokyo single round.cpp"
void testRoundTokyo() {
    FunctionComparisonRunner<int, int> runner(roundTokyo,roundTokyoSol);
    runner.runTest(6);
    runner.runTest(12);

}

int main() {
    srand(time(NULL));
    testRoundTokyo();
    return 0;
}
