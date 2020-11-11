#include <stdio.h>


double horners_rule(int x, int n){
    return x/n;
}

int main() {
    printf("%lf \n", horners_rule(50, 6));
    return 0;
}
