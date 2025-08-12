#include <iostream>
using namespace std;

void primeFactorizationSol(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    cout << endl;
}
