#include <stdio.h>

void findMinMax(int A[], int n){
    int i, min, max;
    min = A[0];
    max = A[0];
    for (i = 0; i < n; i++) {
        if (min < A[i])
            min = A[i];
        else if(max > A[i])
            max = A[i];
    }

    printf("min: %d and max: %d", min, max);
}

// 5, 8, 3, 9, 6, 2, 10, 7, -1, 4
// min = 5
// max = 5

int main() {
    int A[10] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    findMinMax(A, 10);

    return 0;
}


