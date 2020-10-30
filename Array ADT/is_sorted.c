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


bool isSorted(struct Array arr){
    int i; 
    for (i = 0; i < arr.length - 2; i++){
        if(arr.A[i] > arr.A[i+1]){
            return false;
        }
    }

    return true;
}



int main() {
    struct Array arr = {{4, 8, 13, 16, 20, 25, 28, 33}, 20, 8};
    bool result;
    Display(arr);
    result = isSorted(arr);
    if (result)
        printf("Sorted!");
    else
        printf("Not Sorted!");

    return 0;
}