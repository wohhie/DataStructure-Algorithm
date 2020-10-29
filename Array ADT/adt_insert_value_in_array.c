#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[20];
    int size;
    int length;
};


void Display(struct Array arr){
    int i;
    for(i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }

    printf("\n");
}


void InsertToSortedArray(struct Array *arr, int value){
    int i; 
    i = arr->length - 1;
    while (i >= 0 && arr->A[i] > value){
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = value;
    arr->length++;
}



int main() {
    struct Array arr = {{4, 8, 13, 16, 20, 25, 28, 33}, 20, 8};

    Display(arr);
    InsertToSortedArray(&arr, 18);
    Display(arr);

    return 0;
}