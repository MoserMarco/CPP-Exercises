#include "../../../Automatic_Script_Test/VoidFunctionTester.h"
#include "../Code/01 - Asterisk Rectangle.cpp"
#include "../Solutions/01 - Asterisk Rectangle.cpp"

void testAsteriskRetangle() {

    VoidFunctionTester<int, int> tester(asteriskRectangle, asteriskRectangleSol);
    tester.runTest(5,3);
    tester.runTest(7,2);
    tester.runTest(8,4);
    tester.runTest(3,3);
    tester.runTest(2,9);

}
int main() {
    testAsteriskRetangle();
    return 0;
}