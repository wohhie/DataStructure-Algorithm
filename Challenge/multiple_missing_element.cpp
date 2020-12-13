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

int main() {
    int A[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    findMultipleMissingElement(A, 11);

    return 0;
}