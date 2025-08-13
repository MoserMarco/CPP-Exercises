#include <iostream>
#include "../Solutions/23 - Invert number.cpp"
using namespace std;

bool isPalindromeSol(int n) {
    int original = n;
    int reversed = invertSol(original);
    return original == reversed;
}