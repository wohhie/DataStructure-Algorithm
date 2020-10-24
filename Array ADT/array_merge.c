#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];
    int size;
    int length;
};


// A = 1 3 5 7
// B = 2 4 6 8
// Result = 1 2 3 4 5 6 7 8

void Display(struct Array arr){
    int i;
    for(i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }

    printf("\n");
}

struct Array* Merge(struct Array *arr1, struct Array *arr2){
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *) malloc(sizeof(struct Array));
    
    while ( i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else 
            arr3->A[k++] = arr2->A[j++];
    }

    for(; i < arr1->length; i++) arr3->A[k++] = arr1->A[i++];
    for(; j < arr1->length; j++) arr3->A[k++] = arr2->A[j++];

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;

}





int main() {
    struct Array arr1 = {{3, 8, 16, 20, 25}, 10, 5};
    struct Array arr2 = {{4, 10, 12, 22, 23}, 10, 5};
    struct Array *arr3;

    arr3 = Merge(&arr1, &arr2);
    Display(*arr3);


    return 0;
}