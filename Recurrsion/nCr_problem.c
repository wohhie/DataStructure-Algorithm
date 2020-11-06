#include <stdio.h>

// nCr = n! / r! (n-r)!


int factorial(int n){
    if(n == 0) return 1;
    return factorial(n-1) * n;
}

int C(int n, int r){
    int f1, f2, f3, result;
    f1 = factorial(n);
    f2 = factorial(r);
    f3 = factorial(n - r);

    result = f1 / (f2 * f3);
    return result;
}

int main(){

    printf("Combination Formula: ");
    printf("%d \n", C(6, 2));
    return 0;
}
