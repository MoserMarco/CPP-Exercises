#include "../../../Automatic_Script_Test/VoidFunctionTester.h"
#include "../Code/08 - Print uppercase Sigma.cpp"
#include "../Solutions/08 - Print uppercase Sigma.cpp"

void testSigma() {

    VoidFunctionTester<int> tester(printSigma, printSigmaSol);
    tester.runTest(5);
    tester.runTest(11);
    tester.runTest(8);
    tester.runTest(3);
    tester.runTest(9);

}
int main() {
    testSigma();
    return 0;
}