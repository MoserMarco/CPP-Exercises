#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate distance between two points
double distanceSol(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate perimeter of a triangle
double perimeterSol(double x1, double y1, double x2, double y2, double x3, double y3) {
    return distanceSol(x1, y1, x2, y2) +
           distanceSol(x2, y2, x3, y3) +
           distanceSol(x3, y3, x1, y1);
}

