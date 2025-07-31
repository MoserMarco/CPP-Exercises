#include <iostream>
using namespace std;

int main() {
    int N, sumEven = 0, sumOdd = 0;
    cout << "Enter a number N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;

    return 0;
}
