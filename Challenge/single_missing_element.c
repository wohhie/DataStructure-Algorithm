#include <stdio.h>
#include <stdlib.h>

int missingElement(int A[], int n){
    int i, sum, naturalNumSum, missingNumber;
    sum = 0;
    for(i = 0; i < n; i++){
        sum = sum + A[i];
    }

    naturalNumSum = (A[n - 1] * (A[n - 1] + 1)) / 2;
    missingNumber = naturalNumSum - sum;

    return missingNumber;

}

// Alternative
// Finding single missing element from an array
// calculating the index.
// -------------------------------------------------
// 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17
// 0, 1, 2, 3,  4,  5,  6,  7,  8,  9, 10
// ===========================================================
void missingElementUsingIndex(int A[], int n){
    int i, j, diff;
    diff = A[0] - 0;

    for(i = 0; i < n; i++){
        if((A[i] - i) != diff){
            printf("Missing Element: %d", diff + i);
            break;
        }
    }

}


int main() {
    // if sorted!
    int A[11] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};
    // printf("Missing Number: %d", missingElement(A, 11));
    missingElementUsingIndex(A, 11);

    return 0;
}
