#include <iostream>
using namespace std;

int main() {
    // Input a number
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if even or odd
    if (number % 2 == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;

    return 0;
}
