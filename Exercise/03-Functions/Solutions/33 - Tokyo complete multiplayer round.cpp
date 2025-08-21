#include <iostream>
#include "./25 - Random number.cpp"
#include "./31 - Tokyo calculate the winner.cpp"
using namespace std;

void printDice(int d1,int d2,int  p) {
    cout<< "Player" <<p << "'s dice: "<< d1 << ", " << d2 << endl;
}
int completeTokyoRoundSol(int max) {

    int d1,d2;
    
    int counter=-1;
    int decl1, decl2;
    string answare;
    while (true) {
        
        counter++;
        d1 = randomNumberSol(1,max);
        d2 = randomNumberSol(1,max);
        printDice(d1,d2,counter%2+1);
        cout << "Player "<<counter%2+1<<", declare your dice values: ";
        cin >> decl1 >> decl2;
        cout<< "Player" <<counter%2+1 << "'s declered dice: "<< decl1 << ", " << decl2 << endl;
        cout << "Player "<<(counter+1)%2+1<<", do you accept dice values? (yes/no)";
        cin >> answare;
        while (answare != "no" and answare != "yes") {
            cout<< "Invalidx answare"<< endl;
            cout << "Player "<<(counter+1)%2+1<<", do you accept dice values? (yes/no)";
            cin >> answare;
        }
        if (answare=="no") {
            if (!((decl1 == d1 && decl2 == d2) || (decl1 == d2 && decl2 == d1))) {
                counter++;
            }
            break;
        }
        
    }


    return counter%2+1;
}



