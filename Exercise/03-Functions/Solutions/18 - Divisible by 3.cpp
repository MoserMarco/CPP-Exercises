#include <iostream>
#include "../Solutions/17 - Sum of digits.cpp"
using namespace std;

void divisible3Sol(int n) {

    for (int i = 1; i < n; i++) {
        if (sumDigitsSol(i) % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
