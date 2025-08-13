#include <iostream>
using namespace std;

void primeFactorSol(int n, int &factor, int &occurency) {
    if (n <= 1) {
        factor = -1;
        occurency = -1;
        return;
    }

    factor = -1;
    occurency = 0;

    for (int i = 2; i * i <= n; ++i) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            factor = i;
            occurency = count;
        }
    }
    if (n > 1) { // Se rimane un numero primo maggiore
        factor = n;
        occurency = 1;
    }
}