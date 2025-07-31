#include <iostream>
using namespace std;

int main() {
    int N, M, totalSum = 0;
    cout << "Enter two integers N and M: ";
    cin >> N >> M;

    if (N >= M) {
        return 0;  // Exit program
    }

    for (int i = N; i <= M; i++) {
        if (i % 2 == 0) {
            totalSum += i;  // Add even number directly
        } else {
            int oddSum = 0;
            for (int j = 1; j <= i; j++) {
                oddSum += j;  // Sum from 1 to odd number i
            }
            totalSum += oddSum;
        }
    }

    cout << "Result of conditional sum: " << totalSum << endl;

    return 0;
}
