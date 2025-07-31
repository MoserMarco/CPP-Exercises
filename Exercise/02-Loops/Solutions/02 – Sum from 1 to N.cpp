#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter a number N: ";
    cin >> N;

    // Sum integers from 1 to N
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum from 1 to " << N << " is " << sum << endl;

    return 0;
}
