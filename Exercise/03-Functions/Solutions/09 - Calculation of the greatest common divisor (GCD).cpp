#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int GCDSol(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
