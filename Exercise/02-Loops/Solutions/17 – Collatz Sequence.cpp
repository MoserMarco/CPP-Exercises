#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << n;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        cout << " -> " << n;
    }
    cout << endl;

    cout << "\nCollatz sequences for first 100 natural numbers:\n";
    for (int i = 1; i <= 100; i++) {
        int current = i;
        cout << i << ": " << current;
        while (current != 1) {
            if (current % 2 == 0) {
                current = current / 2;
            } else {
                current = 3 * current + 1;
            }
            cout << " -> " << current;
        }
        cout << endl;
    }

    return 0;
}
