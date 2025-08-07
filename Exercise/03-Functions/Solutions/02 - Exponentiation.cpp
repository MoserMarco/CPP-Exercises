
int exponentiationSol(int base, int exponent) {
    // Check if both base and exponent are positive
    if (base < 0 || exponent < 0) {
        return -1;
    }

    int result = 1;

    // Multiply base by itself exponent times
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}