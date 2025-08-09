#include <iostream>
using namespace std;

// Function to print uppercase Sigma shape
void printSigmaSol(int n) {
    if (n % 2 == 0 || n < 5) {
        cout << "n must be odd and greater than 5." << endl;
        return;
    }

    // Top row
    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;

    // Upper diagonal + middle point
    for (int i = 1; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        cout << "*" << endl;
    }

    // Lower diagonal
    for (int i = n / 2 - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) cout << " ";
        cout << "*" << endl;
    }

    // Bottom row
    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;
}

