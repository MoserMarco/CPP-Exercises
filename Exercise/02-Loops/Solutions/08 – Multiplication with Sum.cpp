#include <iostream>
using namespace std;

int main() {
    int N, M, product = 0;
    cout << "Enter two positive integers N and M: ";
    cin >> N >> M;

    // Calculate product by repeated addition
    for (int i = 0; i < M; i++) {
        product += N;
    }

    cout << "Product of " << N << " and " << M << " is " << product << endl;

    return 0;
}
