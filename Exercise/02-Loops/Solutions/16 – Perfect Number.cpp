#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    int sumDivisors = 0;

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sumDivisors += i;
        }
    }

    if (sumDivisors == number) {
        cout << "Perfect number" << endl;
    } else {
        cout << "Not a perfect number" << endl;
    }

    return 0;
}
