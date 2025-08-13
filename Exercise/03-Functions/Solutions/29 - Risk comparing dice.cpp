
#include <iostream>
using namespace std;

// Helper function to sort three dice in descending order
void sortThreeDice(int &a, int &b, int &c) {
    if (a < b) swap(a, b);
    if (b < c) swap(b, c);
    if (a < b) swap(a, b);
}

// Simulates one round of Risk comparing up to 3 dice per player
void riskRound(int d11, int d12, int d13,
               int d21, int d22, int d23,
               int &p1lost, int &p2lost) {

    // Sort attacker and defender dice
    sortThreeDice(d11, d12, d13);
    sortThreeDice(d21, d22, d23);

    // Compare first dice if they exist
    if (d11 > 0 && d21 > 0) {
        if (d11 > d21) p2lost++;
        else p1lost++;
    }

    // Compare second dice if they exist
    if (d12 > 0 && d22 > 0) {
        if (d12 > d22) p2lost++;
        else p1lost++;
    }

    // Compare third dice if they exist
    if (d13 > 0 && d23 > 0) {
        if (d13 > d23) p2lost++;
        else p1lost++;
    }
}
