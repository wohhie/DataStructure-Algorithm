#include <stdio.h>
#include <stdlib.h>

void findMultipleMissingElement(int A[], int n){
    int i, diff;
    diff = A[0] - 0;

    for(i = 0; i < n; i++){
        if(A[i] - i != diff){
            while(diff < A[i] - i){
                printf("%d", diff + i);
                printf("\n");
                diff++;
            }
        }
    }

}

// @2nd Solution
// ===================================================
void nultipleMissingElement(int A[], int l, int h, int n){
    int i;
    int H[h] = {0};
    for(i = 0; i < n; i++){
        H[A[i]]++;
    }

    for(i = l; i < h; i++){
        if(H[i] == 0) printf("%d\n", i);
    }

}

int main() {
    int A[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    // findMultipleMissingElement(A, 11);

    nultipleMissingElement(A, 6, 19, 11);

    return 0;
}