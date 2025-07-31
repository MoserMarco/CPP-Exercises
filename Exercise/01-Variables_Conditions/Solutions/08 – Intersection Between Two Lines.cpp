
#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1;
    double a2, b2, c2;

    // Input coefficients of the first line
    cout << "Enter coefficients for the first line (a1 b1 c1): ";
    cin >> a1 >> b1 >> c1;

    // Input coefficients of the second line
    cout << "Enter coefficients for the second line (a2 b2 c2): ";
    cin >> a2 >> b2 >> c2;

    // Calculate the determinant
    double determinant = a1 * b2 - a2 * b1;

    if (determinant == 0) {
        cout << "The lines do not intersect or are coincident (no unique solution)." << endl;
    } else {
        // Apply Cramer's Rule
        double x = (c1 * b2 - c2 * b1) / determinant;
        double y = (a1 * c2 - a2 * c1) / determinant;
        cout << "Intersection point: x = " << x << ", y = " << y << endl;
    }

    return 0;
}