#include <stdio.h>

// 0 1 1 2 3 5 8
// fibonacci(8) == fibonacci(n-2) + fibonacci(n - 1)
int fibonacci(int n){
    // check if n == 0 || n == 1 then return 0 | 1
    if (n <= 1){
        return n;
    }else{
        // else return fibonacci(n-2) + fibonacci(n-1)
        return fibonacci(n-2) + fibonacci(n-1);
    }

}

int main() {
    printf("Fibonacci Series: \n");
    printf("%d \n", fibonacci(6));

    return 0;
}
