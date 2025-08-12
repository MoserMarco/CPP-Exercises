#include<iostream>
using namespace std;

void asteriskRectangleSol(int base, int height) {

    string result;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < base; j++) {
            if (j == 0 || j == (base - 1) || i == 0 || i == (height - 1)) {
                cout <<  "*";
            } else {
                cout<< " ";
            }
        }
        cout<< "\n";
    }

}
