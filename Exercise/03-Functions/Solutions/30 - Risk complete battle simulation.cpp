#include "29 - Risk comparing dice.cpp"
#include "25 - Random number.cpp"

// Simulate a complete Risk battle
int riskSol(int p1, int p2) {
    while (p1 > 1 && p2 > 0) {
        int d11, d12, d13;
        int d21, d22, d23;

        // Attacker dice
        d11 = randomNumberSol(1, 6);

        if (p1 > 2)
            d12 = randomNumberSol(1, 6);
        else
            d12 = 0;

        if (p1 > 3)
            d13 = randomNumberSol(1, 6);
        else
            d13 = 0;

        // Defender dice
        d21 = randomNumberSol(1, 6);

        if (p2 > 1)
            d22 = randomNumberSol(1, 6);
        else
            d22 = 0;

        if (p2 > 2)
            d23 = randomNumberSol(1, 6);
        else
            d23 = 0;

        int p1lost = 0, p2lost = 0;
        cout<< "Attacker dice: "<< d11<< ", "<< d12<< ", "<< d13<< endl;
        cout<< "Defender dice: "<< d21<< ", "<< d22<< ", "<< d23<< endl;
        riskRoundSol(d11, d12, d13, d21, d22, d23, p1lost, p2lost);

        p1 -= p1lost;
        p2 -= p2lost;
        cout<< "Attacker's tanks destroyed: "<< p1lost<< endl;
        cout<< "Defender's tanks destroyed: "<< p2lost<< endl;
        cout<< "Attacker's remaining tanks: "<< p1<< endl;
        cout<< "Defender's remaining tanks: "<< p2<< endl;

    }

    if (p2 == 0)
        return 1;
    else
        return 2;
}