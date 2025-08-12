#include <iostream>
using namespace std;

int multiplicatioTableSol(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int prod = i * j;
            cout << prod;
            if(j == n)
                cout<< '\n' ;
            else
                cout<<' ';
            sum += prod;
        }
    }
    return sum;
}


