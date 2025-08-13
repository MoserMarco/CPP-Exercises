#include <iostream>
using namespace std;

void primeFactorizationSol(int n) {
    if (n <= 1) {
        cout<< "n  must be greater than 1.\n";
        return;
    }
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    cout << endl;
}
