#include <stdio.h>

int sum(int n){
    if (n <= 0)
        return 0;
    else
        return sum(n - 1);
}


int main() {
    int result;
    result = sum(4);
    printf("%d\n", result);

    return 0;
}
