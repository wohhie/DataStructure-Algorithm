#include <stdio.h>

int fibonacci(int n){
    // 0 1 1 2 3 5 8
    static int s0 = 0, s1 = 1, result, i;

    if (n <= 1){
        return n;
    }

    for(i = 2; i <= n; i++ ){
        result = s0 + s1;
        s0 = s1;
        s1 = result;
    }
    return result;
}



int main() {
    printf("Fibonacci Series: \n");
    printf("%d \n", fibonacci(6));

    return 0;
}
