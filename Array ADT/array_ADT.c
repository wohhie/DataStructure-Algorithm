#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};

int main() {
    struct Array arr;
    printf("Enter the size of an array: ");
    scanf("%d", &arr.size);

    // initialize the array
    arr.A = (int *) malloc(arr.size * sizeof(int));
    arr.length = 0;


    return 0;
}
