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

int main() {
    // if sorted!
    int A[11] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    printf("Missing Number: %d", missingElement(A, 11));

    return 0;
}
