#include <stdio.h>


double horners_rule(int x, int n){
    static double result = 1;
    if(n == 0){
        return result;
    }else{
        result = 1 + (double)x/n * result;
        return horners_rule(x, n - 1);
    }
}

int main() {
    printf("%lf \n", horners_rule(1, 10));
    return 0;
}
