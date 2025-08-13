#include <iostream>
#include "../Solutions/09 - Calculation of the greatest common divisor (GCD).cpp"
using namespace std;

void sumFractionsSol(int numerator1, int denominator1, int numerator2, int denominator2, int &numeratorR, int &denominatorR) {
    // Calcolo del denominatore comune
    denominatorR = denominator1 * denominator2;
    // Calcolo del numeratore
    numeratorR = numerator1 * denominator2 + numerator2 * denominator1;
    // Semplificazione della frazione
    int gcd = GCDSol(abs(numeratorR),denominatorR);
    numeratorR /= gcd;
    denominatorR /= gcd;
}
