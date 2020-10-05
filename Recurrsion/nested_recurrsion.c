#include <stdio.h>

int func(int n){
    if(n > 100)
        return n - 10;

    return func(func(n + 11));
}

int main() {
    int r;
    r = func(100);
    printf("%d\n", r);
    return 0;
}
