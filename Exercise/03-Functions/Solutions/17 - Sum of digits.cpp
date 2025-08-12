#include <iostream>
using namespace std;

int sumDigitsSol(int n) {
    if (n<0) {
        return -1;
    }
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

