#include <stdio.h>
#include <stdlib.h>


struct Array{
    int A[20];
    int length;
    int size;
};

void Display(struct Array arr){
    int i;
    for(i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}


struct Array* InsectionUnsorted(struct Array *arr1, struct Array *arr2){
    int i, j, k = 0;
    struct Array *arr3;
    arr3 = (struct Array *) malloc(sizeof(struct Array));

    for(i = 0; i < arr1->length; i++){
        for(j = 0; j < arr2->length; j++){
            if(arr1->A[i] == arr2->A[j]){
                arr3->A[k++] = arr1->A[i];
            }
        }
    }

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}





// 3 5 10 4 6
// 12 4 7 2 5
// Intersection: 5, 4

int main() {
    struct Array arr1 = {{3, 5, 10, 4, 6}, 5, 10};
    struct Array arr2 = {{12, 4, 7, 2, 5}, 5, 10};
    struct Array *arr3;

    arr3 = InsectionUnsorted(&arr1, &arr2);
    Display(*arr3);

    return 0;
}
