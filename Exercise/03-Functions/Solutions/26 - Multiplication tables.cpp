#include <iostream>
#include <cstdlib>
#include <ctime>
#include "./25 - Random number.cpp"
using namespace std;


// Asks the user to solve 10 multiplication problems
void tablesSol(int n1, int n2) {
    int errors = 0;
    for (int i = 0; i < 10; i++) {
        int a = randomNumberSol(1, n1);  //generates the factors
        int b = randomNumberSol(1, n2);
        int answer;
        cout << "Write the product between " << a << " and " << b << ": ";
        cin >> answer;
        while (answer != a * b) {  //checks the answer
            errors++;
            cout << "Retry: ";
            cin >> answer;
        }
    }
    if (errors < 3) {
        cout << "Very good\n";
    } else if (errors <= 10) {
        cout << "good\n";
    } else {
        cout << "Train more!\n";
    }
}
