#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    // Print even numbers from 1 to N
    for (int i = 2; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
