#include <stdio.h>

void findPairOfSum_Unsorted(int A[], int n, int k){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(A[i] + A[j] == k){
                printf("%d + %d = %d\n", A[i], A[j], k);
            }

        }
    }
}


// 6, 3, 8, 10, 16, 7, 5, 2, 9, 14
// 0, 1, 2,  3,  4, 5, 6, 7, 8, 9
// i
//    j

int main(){
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    findPairOfSum_Unsorted(A, 10, 10);
    return 0;
}