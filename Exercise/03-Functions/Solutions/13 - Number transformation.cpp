#include <iostream>
using namespace std;

void transformationSol(float &n1, float &n2) {
    if (n1 < n2) {
        if (n1 < 0)
            n1 =0;
        else
            n1 = 1;
        n2 = 1 / n2;
    } else {
        if (n2 < 0)
            n2 =0;
        else
            n2 = 1;
        n1 = 1 / n1;
    }
}
