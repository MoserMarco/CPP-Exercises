#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Ask again if inputs are <= 0
    do {
        cout << "Enter divisor (n) and upper limit (m), both > 0: ";
        cin >> n >> m;
    } while (n <= 0 || m <= 0);

    // Print numbers from 1 to m divisible by n
    for (int i = 1; i <= m; i++) {
        if (i % n == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
