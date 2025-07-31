#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    // Check for the first terms
    if (n <= 0) {
        cout << "No terms to display." << endl;
        return 0;
    }

    // Print the Fibonacci series up to n-th term
    int term0 = 0;
    int term1 = 1;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        // For the first term
        if (i == 0) {
            cout << term0;
        }
        // For the second term
        else if (i == 1) {
            cout << " " << term1;
        }
        // For subsequent terms
        else {
            long long nextTerm = term0 + term1;
            cout << " " << nextTerm;
            // Shift sliding window
            term0 = term1;
            term1 = nextTerm;
        }
    }

    cout << endl;
    return 0;
}
