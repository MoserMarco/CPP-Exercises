#include <iostream>
#include "./25 - Random number.cpp"
#include "./31 - Tokyo calculate the winner.cpp"
using namespace std;

void printDice(int d1,int d2,int  p) {
    cout<< "Player" <<p << "'s dice: "<< d1 << ", " << d2 << endl;
}
int roundTokyoSol(int max) {

    int p1d1 = randomNumberSol(1,max);
    int p1d2 = randomNumberSol(1,max);
    int p2d1, p2d2;
    int winner = 2;
    int counter=-1;
    while (winner == 2) {

        counter++;

        p2d1 = randomNumberSol(1,max);
        p2d2 = randomNumberSol(1,max);
        printDice(p1d1,p1d2,counter%2+1);
        printDice(p2d1,p2d2,(counter+1)%2+1);

        winner = tokyoSol(p1d1,p1d2,p2d1,p2d2);
        p1d1 = p2d1;
        p1d2 = p2d2;
    }


    return counter%2+1;
}

