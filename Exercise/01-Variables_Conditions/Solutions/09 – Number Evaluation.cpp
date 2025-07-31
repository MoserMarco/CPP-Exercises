#include <iostream>
using namespace std;

int main() {
    // Input integers A, B, C
    int A, B, C;
    cout << "Enter three integers A, B, C: ";
    cin >> A >> B >> C;

    // Check conditions
    if (A > B) {
        if (C % 2 == 0)
            cout << "A > B and C is even" << endl;
        else if (C % 5 == 0)
            cout << "A > B and C is a multiple of 5" << endl;
        else
            cout << "A > B but C is not valid" << endl;
    } else {
        if (B % 3 == 0)
            cout << "B is a multiple of 3" << endl;
        else if (B > C)
            cout << "B > C but not a multiple of 3" << endl;
        else
            cout << "B ≤ C and not a multiple of 3" << endl;
    }

    return 0;
}
