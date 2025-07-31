
#include <iostream>
using namespace std;

int main() {
    float price, discount, netPrice;

    // Ask the user for price and discount
    cout << "Enter the price: ";
    cin >> price;

    cout << "Enter the discount (1-99): ";
    cin >> discount;

    // Validate the discount range
    if (discount >= 1 && discount <= 99) {
        netPrice = price - (price * discount / 100);
        cout << "Net price after discount: " << netPrice << endl;
    } else {
        cout << "Invalid discount input" << endl;
    }

    return 0;
}