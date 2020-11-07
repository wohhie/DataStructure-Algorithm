#include <stdio.h>

int PT_nCr(int n, int r){
    if (r == 0 || n == r) return 1;
    return PT_nCr(n - 1, r - 1) + PT_nCr(n - 1, r);
}

int main() {
    printf("Pascal Triangle Solution: ");
    printf("%d \n", PT_nCr(6, 2));
    return 0;
}
