#include <stdio.h>

int F[10];

int fibonacci(int n){
    if (n <= 1){
        F[n] = n;
        return n;
    }else{
        if (F[n-2] == -1){
            F[n-2] = fibonacci(n-2);
        }

        if (F[n-1] == -1){
            F[n-1] == fibonacci(n-1);
        }

        return F[n-2] + F[n-1];
    }
}


int main() {

    int i;
    for(i = 0; i < 10; i++){
        F[i] = -1;
    }

    printf("Fibonacci Series with Memorization: \n");
    printf("%d \n", fibonacci(5));

    return 0;
}
