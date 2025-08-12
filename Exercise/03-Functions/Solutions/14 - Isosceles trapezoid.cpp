#include <iostream>
using namespace std;

void trapezoidSol(int b, int l) {
    if (b <= 0 || l <= 0) {
        cout << "b and l must be greater than 0." << endl;
        return;
    }
    for (int i=0; i<  b +  l; i++) {
        if (i<l) {
            cout<<" ";
        }
        else {
            cout<<"_";
        }
    }
    cout<<endl;

    for (int i = 0; i < l-1; i++) {

        for (int s = 0; s < l - i -1; s++) {
            cout << " ";
        }

        cout << "/";

        for (int s = 0; s < b + 2 * i ; s++) {
            cout << " ";
        }

        cout << "\\" << endl;
    }


    cout << "/";
    for (int s = 0; s < b + 2 * l -2; s++) {
        cout << "_";
    }
    cout << "\\" << endl;
}
