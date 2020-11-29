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



struct Array* DifferenceUnsorted(struct Array *arr1, struct Array *arr2){
    int i, j, k;
    bool flag;

    struct Array *arr3;
    arr3 = (struct Array *) malloc(sizeof(struct Array));

    k = 0;
    for(i = 0; i < arr1->length; i++){
        flag = false;
        for(j = 0; j < arr2->length; j++){
            if (arr1->A[i] == arr2->A[j]){
                flag = true;
                break;
            }
        }

        if(!flag){
            arr3->A[k++] = arr1->A[i];
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;

}



// 3 5 10 4 6
// 12 4 7 2 5
// A - B = 3, 10, 6

int main() {
    struct Array arr1 = {{3, 5, 10, 4, 6}, 5, 10};
    struct Array arr2 = {{12, 4, 7, 2, 5}, 5, 10};
    struct Array *arr3;

    arr3 = DifferenceUnsorted(&arr1, &arr2);
    Display(*arr3);

    return 0;
}
