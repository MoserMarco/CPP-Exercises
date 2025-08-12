#include <iostream>
using namespace std;

void capsuleSol(int n) {
    if (n <= 0) {
        cout << "n must be greater than 0." << endl;
        return;
    }


    for (int s = 0; s < n*2; s++) {
        if (s<n) {
            cout << " ";
        }else {
            cout << "-" ;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++) cout << " ";
        cout << "/";
        for (int s = 0; s < n + 2 * i; s++) cout << " ";
        cout << "\\" << endl;
    }


    for (int i = 0; i < n; i++) {
        cout << "|";
        for (int s = 0; s < n + 2 * (n - 1); s++) cout << " ";
        cout << "|" << endl;
    }


    for (int i = n - 1; i >= 0; i--) {
        for (int s = 0; s < n - i - 1; s++) cout << " ";
        cout << "\\";
        for (int s = 0; s < n + 2 * i; s++) cout << " ";
        cout << "/" << endl;
    }


    for (int s = 0; s < n*2; s++) {
        if (s<n) {
            cout << " ";
        }else {
            cout << "-";
        }
    }
    cout<< endl;


}
