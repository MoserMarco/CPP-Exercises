#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    // Print numbers from 0 to N
    for (int i = 0; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}