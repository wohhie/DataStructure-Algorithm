#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void Rearrange(struct Array *arr){
    int i, j;
    i = 0;
    j = arr->length - 1;
    while(i < j){
        while(arr->A[i] < 0) i++;
        while(arr->A[j] >= 0) j--;

        if(i < j) Swap(&arr->A[i], &arr->A[j]);
    }
}



int main() {
    struct Array arr = {{2, -3, 25, 10, -15, -7}, 20, 6};

    Display(arr);
    Rearrange(&arr);
    Display(arr);

    return 0;
}
