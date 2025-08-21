#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rollDieSol(int n) {
    if (n < 1) return -1;
    return rand() % (n) + 1;
}

double probabilitySol(int n) {
    if (n < 1) return -1;
    int trials = 100000;
    int countDivisible = 0;
    for (int i = 0; i < trials; i++) {
        if (rollDieSol(n) % 3 == 0) countDivisible++;
    }
    return static_cast<double>(countDivisible) / trials;
}