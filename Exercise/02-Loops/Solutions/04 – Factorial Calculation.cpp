#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long factorial = 1;
    cout << "Enter a number: ";
    cin >> number;

    // Calculate factorial
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << number << " is " << factorial << endl;

    return 0;
}
