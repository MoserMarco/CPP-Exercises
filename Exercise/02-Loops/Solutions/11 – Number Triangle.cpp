#include <iostream>
using namespace std;

int main() {
    int K;
    cout << "Enter number of rows K: ";
    cin >> K;

    // Print number triangle
    for (int row = 1; row <= K; row++) {
        for (int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
