#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Returns a random integer between min and max (inclusive)
int randomNumberSol(int min, int max) {
    if (min > max) {  // swap variables
        int temp = min;
        min = max;
        max = temp;
    }

    return rand() % (max - min + 1) + min;
}

