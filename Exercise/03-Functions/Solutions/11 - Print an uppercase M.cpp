#include <iostream>
using namespace std;

void printMSol(int height) {
    if (height < 5 || height % 2 == 0) {
        cout << "height must be odd and greater than 5." << endl;
        return;
    }
    int mid = height / 2;
    int space = mid*2-1;

    cout<<"*";
    for (int i =0 ; i< space; i++) {
        cout<< " ";
    }
    cout<<"*\n";
    for (int i =0; i< mid; i++) {
        cout<<"*";
        for (int j =0 ; j< space; j++) {
            if (j==i || j==(space -i-1)) {
                cout<< "*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<"*\n";
    }

    for (int i =0 ; i< mid; i++) {
        cout<<"*";
        for (int i =0 ; i< space; i++) {
            cout<< " ";
        }
        cout<<"*\n";
    }
}

