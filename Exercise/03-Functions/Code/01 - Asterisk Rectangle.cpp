#include<iostream>
using namespace std;

void asteriskRectangle(int base, int height) {
    string result;
    for (int i = 0; i < base; i++) {
        cout <<  "*";
    }
    cout<< "\n";
    for (int j = 0; j < height-2; j++) {
        cout <<  "*";
        for (int i=0; i< base-2; i++) {
            cout<< " ";
        }
        cout <<  "*";
        cout<< "\n";
    }

    for (int i = 0; i < base; i++) {
        cout <<  "*";
    }
    cout<< "\n";

}
