

int exponentiation(int base, int exponent) {
    int rit =1;
    for (int i =0; i< exponent; i++) {
        rit *= base;
    }
    return rit;
}