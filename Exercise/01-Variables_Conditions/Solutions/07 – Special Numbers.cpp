#include <iostream>
using namespace std;

int main() {
    // Input number X
    int x;
    cout << "Enter number X: ";
    cin >> x;

    // Check conditions
    if (x % 2 == 0) { // even
        if (x % 6 == 0)
            cout << "Valid number" << endl;
        else
            cout << "Even number but not divisible by 6" << endl;
    } else { // odd
        if (x > 15)
            cout << "Odd number greater than 15" << endl;
        else if (x < 5)
            cout << "Odd number less than 5" << endl;
        else
            cout << "Odd number between 5 and 15" << endl;
    }

    return 0;
}
