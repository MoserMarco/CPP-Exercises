
#include "../Solutions/09 - Calculation of the greatest common divisor (GCD).cpp"
// Including the GCD function implemented in exercise 09,
// so it can be reused here without rewriting the code.

// Function to calculate LCM using GCD
int LCMSol(int a, int b) {
    return (a * b) / GCDSol(a, b);
}

