int exponentiationSol(int base, int exponent) {
    if (base<0 || exponent <0) {
        return -1;
    }


    int result = 1;
    for (int i = 0; i < exponent; ++i)
        result *= base;
    return result;
}