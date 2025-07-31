#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    // Print numbers from N down to 0
    for (int i = N; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
