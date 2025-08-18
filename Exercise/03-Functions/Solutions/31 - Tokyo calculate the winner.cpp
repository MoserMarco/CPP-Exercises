#include <iostream>
#include <algorithm>
using namespace std;

int tokyoSol(int p1d1, int p1d2, int p2d1, int p2d2) {


    if (p1d1+p1d2==3) {
        if (p2d1+p2d2==3)
            return 2;
        return 1;
    }

    bool p1double = (p1d1 == p1d2);
    bool p2double = (p2d1 == p2d2);
    if (p1double && p2double) {

        if (p1d1 > p2d1)
            return 1;
        else
            return 2;
    } 
    else if (p1double) {
        return 1;
    } 
    else if (p2double) {
        return 2;
    } 


    int p1score = max(p1d1, p1d2) * 10 + min(p1d1, p1d2);
    int p2score = max(p2d1, p2d2) * 10 + min(p2d1, p2d2);

    if (p1score > p2score)
        return 1;
    else
        return 2;

}
