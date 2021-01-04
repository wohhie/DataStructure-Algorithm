#include <stdio.h>


// |  d  |  e  | c  |  i  |  m  | a  |  l  | \0 | 
// |-----|-----|----|-----|-----|----|-----|----|
// | 100 | 101 | 99 | 105 | 109 | 97 | 108 | 7  | 



int main() {
    char A[] = "decimal";
    char B[] = "medical";
    int i;
    int H[25] = {0};

    for(i = 0; A[i] != '\0'; i++){
        H[A[i] - 97]++;
    }

    for(i = 0; B[i] != '\0'; i++){
        H[B[i] - 97] -= 1;
        if(H[B[i] - 97] < 0){
            printf("No Anagram!");
            break;
        }
    }

    
}