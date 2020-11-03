#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};


void Display(Struct Array arr){
    int i;
    printf("Elements are:\n");
    for(i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i])
}


int main() {
    struct Array arr;
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &arr.size);

    // initialize the array
    arr.A = (int *) malloc(arr.size * sizeof(int));
    arr.length = 0;


    // getting the values
    printf("Enter number of numbers");
    scanf("%d", &n);

    printf("Enter all elements:\n")
    for(i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);


    arr.length = n;

    return 0;
}
