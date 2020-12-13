#include <stdio.h>

// 3, 6,  8,  8, 10, 12, 15, 15, 15, 20
// 0  1,  2,  3,  4,  5,  6,  7,  8,  9
// i  i   i 
//            j   j
//            i 

void findDuplicates(int A[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        if(A[i] == A[i+1]){
            j = i + 1; 
            while(A[j] == A[i]) j++;
            printf("%d appears %d times. \n", A[i], j - i);
            i = j - 1;
        }
    }
}

int main() {
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    findDuplicates(A, 9);
    return 0;
}