#include <stdio.h> 
#include <stdlib.h>


// 3, 8, 8, 1, 2, 12, 12, 12, 15, 4
//                 i
//                         j
// 3, 8, -1, 1, 2, 12, 12, 12, 15, 4
// 3, 8, -1, 1, 2, 12, -1, -1, 15, 4
// Result: count = 1 + 1 + 1


void findDuplicate_Unsorted(int A[], int n){
    int i, j, count; 
    for(i = 0; i < n - 1; i++){
        count = 1;
        //Todo Condition for the -1 will be here
        if(A[i] != -1){
            for(j = i + 1; j < n; j++){
                if(A[i] == A[j]){
                    count++;
                    A[j] = -1;
                }
            }
        }

        if(count > 1){
            printf("%d appears %d times\n", A[i], count);
        }
        
    }

}


void findDuplicates_2ndSolution(int A[], int l, int h, int n){
    int i;
    int H[15] = {0};
    for(i = 0; i < n; i++){
        H[A[i]]++;
    }

    for(i = l; i < h; i++){
        if(H[i] > 1)
            printf("%d appears %d times\n", i, H[i]);
    }
}


int main() {
    int A[10] = {3, 8, 8, 1, 2, 12, 12, 12, 15, 4};
    // findDuplicate_Unsorted(A, 10);
    findDuplicates_2ndSolution(A, 1, 15, 10);
    return 0;
}