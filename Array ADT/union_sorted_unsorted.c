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

struct Array* UnionArray(struct Array *arr1, struct Array *arr2){
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


int main() {
    struct Array arr1 = {{3, 5, 10, 4, 6}, 10, 5};
    struct Array arr2 = {{12, 4, 7, 2, 5}, 10, 5};
    struct Array *result;

    result = UnionArray(&arr1, &arr2);

    Display(*result);



    return 0;
}
