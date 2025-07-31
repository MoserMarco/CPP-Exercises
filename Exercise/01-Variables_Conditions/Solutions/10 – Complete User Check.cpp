#include <iostream>
using namespace std;

int main() {
    // Input age, gender and account balance
    int age;
    char gender;
    double balance;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender (M/F/O): ";
    cin >> gender;
    cout << "Enter account balance: ";
    cin >> balance;

    // Check if user is minor
    if (age < 18) {
        cout << "User is a minor" << endl;
    } else {
        // Check gender using switch
        switch(gender) {
            case 'M':
            case 'm':
                cout << "Adult male user" << endl;
                break;
            case 'F':
            case 'f':
                cout << "Adult female user" << endl;
                break;
            case 'O':
            case 'o':
                cout << "Adult user with unspecified gender" << endl;
                break;
            default:
                cout << "Invalid gender" << endl;
        }

        // Check balance
        if (balance < 0)
            cout << "Warning: account overdrawn" << endl;
        else if (balance <= 1000)
            cout << "Low balance" << endl;
        else
            cout << "High balance" << endl;
    }

    return 0;
}
