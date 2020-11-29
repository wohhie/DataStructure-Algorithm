#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Array {
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


struct Array* IntersectionSorted(struct Array *arr1, struct Array *arr2){
    int i, j, k;
    struct Array *arr3;
    arr3 = (struct Array *)malloc(sizeof(struct Array));

    i = j = k = 0;
    while (i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            i++;
        }else if(arr2->A[j] < arr1->A[i]){
            j++;
        }else{
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}



// 3 4 5 6 10
// 2 4 5 7 12
// Intersection: 5, 4

int main() {
    struct Array arr1 = {{1, 3, 5, 7, 9}, 5, 10};
    struct Array arr2 = {{1, 2, 3, 4, 7}, 5, 10};
    struct Array *arr3;

    arr3 = IntersectionSorted(&arr1, &arr2);
    Display(*arr3);

    return 0;
}
