#include <iostream>
using namespace std;

int main() {
    // Input three numbers
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Calculate average
    double average = (num1 + num2 + num3) / 3;

    // Output average
    cout << "Average: " << average << endl;

    return 0;
}
