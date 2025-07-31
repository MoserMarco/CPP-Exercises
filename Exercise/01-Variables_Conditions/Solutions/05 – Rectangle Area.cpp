#include <iostream>
using namespace std;

int main() {
    // Input base and height
    double base, height;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;

    // Calculate area and perimeter
    double area = base * height;
    double perimeter = 2 * (base + height);

    // Output results
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
