//
// Created by Wohhie on 12/16/2020.
//
#include <stdio.h>

void findPairOfSum_Sorted(int A[], int n, int k){
    int i, j;
    i = 0; j = n - 1;
    while (i < j){
        if(A[i] + A[j] == k){
            printf("%d + %d = %d\n", A[i], A[j], k);
            i++;
            j++;
        }
            
        else if(A[i] + A[j] < k)
            i++;
        else
            j--;
    }
}


int main() {
    int A[10] = { 1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    findPairOfSum_Sorted(A, 10, 10);
    return 0;
}
