#include "../../../Automatic_Script_Test/VoidFunctionTester.h"
#include "../Code/05 - Print numbers with newlines.cpp"
#include "../Solutions/05 - Print numbers with newlines.cpp"

void testNumbersWithNewlinesa() {

    VoidFunctionTester<int> tester(numbersWithNewlines, numbersWithNewlinesSol);
    tester.runTest(5);
    tester.runTest(11);
    tester.runTest(45);
    tester.runTest(3);
    tester.runTest(-2);

}
int main() {
    testNumbersWithNewlinesa();
    return 0;
}