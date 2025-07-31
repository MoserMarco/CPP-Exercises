#include <iostream>
using namespace std;

int main() {
    // Input age
    int age;
    cout << "Enter age: ";
    cin >> age;

    // Check if age is greater than 18
    if (age > 18)
        cout << "Age is greater than 18" << endl;
    else
        cout << "Age is 18 or less" << endl;

    return 0;
}
