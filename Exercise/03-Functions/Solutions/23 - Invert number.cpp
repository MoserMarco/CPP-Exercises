#include <iostream>
using namespace std;

int invertSol(int n) {
    int sign=0;
    if (n < 0)
        sign = -1;
    else
        sign = 1;

    n = abs(n);
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed * sign;
}