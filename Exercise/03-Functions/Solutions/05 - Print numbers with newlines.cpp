#include <iostream>
using namespace std;

// Function to print numbers with newline based on value of n
void numbersWithNewlinesSol(int n) {
    if (n < 2) {
        cout<< "n must be greater than 1.\n";
        return;
    }
    int limit = 2;
    if ( n> 10) {
        limit = 10;
    }

    for (int i = 1; i < n; i++) {
        cout << i << " ";
        if (i % limit == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

