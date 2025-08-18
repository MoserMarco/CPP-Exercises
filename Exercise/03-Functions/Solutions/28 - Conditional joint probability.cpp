#include <iostream>
#include <cstdlib>
#include <ctime>
#include "./25 - Random number.cpp"
using namespace std;

int countGreater(int t, int n, int trials) {
    int rit=0;
    for (int i = 0; i < trials; i++) {
        int roll = randomNumberSol(1, n);
        if (roll > t) {
            rit++;

        }
    }
    return rit;
}

int countOddGreater(int t, int n, int trials) {
    int rit=0;
    for (int i = 0; i < trials; i++) {
        int roll = randomNumberSol(t+1, n);
        if (roll % 2 != 0)  {
            rit++;

        }
    }
    return rit;
}

double jointProbabilitySol(int t, int n) {
    if (n < 1 || t < 1) return -1;
    if (t >= n) return 0;

    int trials = 100000;
    int Greater = countGreater( t,  n,  trials);
    int OddGreater = countOddGreater( t,  n,  trials);
    double pB = static_cast<double>(Greater) / trials;
    double pA_given_B = static_cast<double>(OddGreater) / trials;
    return pA_given_B * pB;
}

