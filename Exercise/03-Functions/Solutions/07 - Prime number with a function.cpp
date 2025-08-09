#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrimeSol(int n) {
    if (n <= 1) {
        return true;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }

    }
    return true;
}