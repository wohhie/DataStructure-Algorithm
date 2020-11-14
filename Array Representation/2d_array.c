#include <stdio.h>
#include <stdlib.h>


int main() {
    int A[3][4] = {
        {1, 2, 3, 4},
        {2, 4, 6, 8},
        {1, 3, 5, 7}
    };
    int i, j;

    for (i = 0; i < 3; i++){
        for(j = 0; j < 4; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }



    // 2d dynamic array.
    int *B[3];
    int **C;

    B[0] = (int *) malloc(4 * sizeof(int));
    B[1] = (int *) malloc(4 * sizeof(int));
    B[2] = (int *) malloc(4 * sizeof(int));


    C = (int *) malloc(sizeof(int *));
    C[0] = (int *) malloc(sizeof(int));
    C[1] = (int *) malloc(sizeof(int));
    C[2] = (int *) malloc(sizeof(int));






    return 0;
}
