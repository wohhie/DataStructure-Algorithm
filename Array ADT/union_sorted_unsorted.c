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


struct Array* UnionUnsorted(struct Array *arr1, struct Array *arr2){
    int i, j;
    bool flag;
    int temp;
    struct Array *arr3;
    arr3 = (struct Array *) malloc(sizeof(struct Array));

    for(i = 0; i < arr1->length; i++){
        arr3->A[i] = arr1->A[i];
    }
    // increase size and length
    arr3->size = 20;
    arr3->length = i;


    for(j = 0; j < arr2->length; j++){
        flag = false;
        for(i = 0; i < arr1->length; i++){
            if(arr1->A[i] == arr2->A[j]) {
                    flag = true;
                    break;
            }
        }


        if(!flag){
            arr3->A[arr3->length++] = arr2->A[j];
        }
    }
    arr3->size = 10;
    return arr3;
}

struct Array* unionSorted(struct Array *arr1, struct Array *arr2){
    // 3, 4, 5, 6, 10 = i
    // 2, 4, 5, 7, 12 = j, j++, i++
    // k ++, k++, 
    int i, j, k;
    struct Array *arr3 = malloc(sizeof(struct Array)); 
    i = j = k = 0;
    while (i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
            
        }else if(arr2->A[j] < arr1->A[i]){
            arr3->A[k++] = arr2->A[j++];
        }else{
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    for(; i < arr1->length; i++) arr3->A[k++] = arr1->A[i++];
    for(; j < arr2->length; j++) arr3->A[k++] = arr2->A[j++];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}




int main() {
    struct Array arr1 = {{1, 2, 3, 6, 10}, 10, 5};
    struct Array arr2 = {{2, 4, 5, 7, 12}, 10, 5};
    struct Array *result;

    // result = UnionArray(&arr1, &arr2);
    result = unionSorted(&arr1, &arr2);
    Display(*result);


    return 0;
}
