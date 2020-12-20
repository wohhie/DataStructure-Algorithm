#include <stdio.h>

void palindrome(char A[]){
    int i, j;
    int B[6];
    for(i = 0; A[i] != '\0'; i++){}     // i = 6
    i = i - 1;

    // reverse the string
    for(j = 0; j < i; i--, j++){
        B[j] = A[i];
    }
    // compare the string
    for(i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++){
        if(A[i] != B[j]); break;
    }



}

int main(){
    char A[] = "nitin";
    palindrome(A);

    return 0;
}
