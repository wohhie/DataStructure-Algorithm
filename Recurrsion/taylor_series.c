#include <stdio.h>

/* Taylor series
# 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + .........
# sum(n) = 1+2+3+4+.....+n = sum(n-1) + n
# fact(n) = 1*2*3*4*.....*n = fact(n-1) * n
# pow(x, n) = x*n*x*.....*n = pow(x, n - 1) * x

#=================================================
#       RECURSIVE FUNCTION - TAYLOR SERIES
#================================================= */
double taylorSeries(int x, int n){

    static double p = 1, f = 1;
    double r;


    if(n == 0){
        return 1;
    }else{
        r = taylorSeries(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p/f;
    }
}

int main() {
    printf("TAYLOR SERIES: \n");
    printf("%1f \n", taylorSeries(1, 10));
    return 0;
}
