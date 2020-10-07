#include <stdio.h>


int pow(int m, int n){
    if (n == 0)
        return 1;
    else
        return pow(m, n - 1) * m;
}


int altPow(int m, int n){
    if (n == 0)
        return 1;
    else if (n % 2 == 0)    // for even number
        return altPow(m * m, n / 2);
    else // for odd number
        return altPow(m * m, (n - 1) / 2) * m;

}




int main() {
    // 2^3 = 2 * 2 * 2
    // m^n = m * m * m * . . . . n - 1 * m
    int result = 0;
    result = altPow(2, 5);
    printf("%d\n", result);

    return 0;
}
