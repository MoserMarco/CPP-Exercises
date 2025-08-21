#include "../../../Automatic_Script_Test/FunctionComparisonRunner.h"
#include "../Solutions/33 - Tokyo complete multiplayer round.cpp"
#include "../Code/33 - Tokyo complete multiplayer round.cpp"
void testRoundTokyo() {
    FunctionComparisonRunner<int, int> runner(completeTokyoRound,completeTokyoRoundSol);
    runner.runTest(6);
    runner.runTest(12);

}

int main() {
    srand(time(NULL));
    testRoundTokyo();
    return 0;
}
