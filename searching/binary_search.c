#include <stdio.h>

struct Array {
    int A[11];
    int size;
    int length;
};


int RBinarySearch(struct Array arr, int key){
    int l, h, mid;
    l = 0;
    h = arr.length - 1;

    while(l <= h){
        mid = (l + h) / 2;
        if(arr.A[mid] == key){
            return mid;
        }else if(key > arr.A[mid]){
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }
    return - 1;
}


void display(struct Array arr){
    int i;
    for(i = 0; i < arr.length; i++){
        printf("%d, ", arr.A[i]);
    }
}


int main(){
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34}, 11, 11};
    printf("%d", RBinarySearch(arr, 18));
    return 0;
}

