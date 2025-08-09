#include <iostream>
using namespace std;

// Function to return difference between max and min of three numbers
int differenceSol(int n1, int n2, int n3) {
    int maxVal = n1;
    int minVal = n1;

    if (n2 > maxVal) maxVal = n2;
    if (n3 > maxVal) maxVal = n3;

    if (n2 < minVal) minVal = n2;
    if (n3 < minVal) minVal = n3;

    return maxVal - minVal;
}