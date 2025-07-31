#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "How many numbers do you want to enter? ";
    cin >> count;

    int maxNum, minNum, sum = 0;
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < count; i++) {
        int num;
        cout << "Num" << i + 1 << ": ";
        cin >> num;

        if (i == 0) {
            maxNum = num;
            minNum = num;
        } else {
            if (num > maxNum) maxNum = num;
            if (num < minNum) minNum = num;
        }

        sum += num;

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    double average = static_cast<double>(sum) / count;

    cout << "Maximum number: " << maxNum << endl;
    cout << "Minimum number: " << minNum << endl;
    cout << "Average: " << average << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
