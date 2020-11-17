#include <stdio.h>
#include <stdlib.h>


struct Array {
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("Elements are:\n");
    for(i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);

    printf("\n");
}


void Append(struct Array *arr, int x){
    // check the sufficient space are available
    if(arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if(index >=0 && index <= arr->length){
        for(i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];

        arr->A[index] = x;
        arr->length++;
    }
}


int Delete(struct Array *arr, int index){
    int x = 0;
    int i;
    if (index >= 0 && index <= arr->length){
        x = arr->A[index];
        for(i = index; i < arr->length; i++)
            arr->A[i] = arr->A[i+1];

        arr->length--;
        return x;
    }
}

/*                  LINEAR SEACRH
=============================================================*/
int Linear_search(struct Array *arr, int index){
    int i;

    for(i = 0; i < arr->length; i++){
        if(index == arr->A[i]){
            return index;
        }
    }
    return -1;
}


void Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


/*          UPDATED LINEAR SEACRH: TRANSPOSITION
=============================================================*/
int Linear_search_transposition(struct Array *arr, int index){
    int i;

    for(i = 0; i < arr->length; i++){
        if(index == arr->A[i]){
            Swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}


/*          UPDATED LINEAR SEACRH: MOVE TO HEAD
=============================================================*/
int Linear_search_movetohead(struct Array *arr, int index){
    int i;

    for(i = 0; i < arr->length; i++){
        if(index == arr->A[i]){
            Swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}


/*          BINARY SEARCH: LOOP
=============================================================*/
int binary_search(struct Array arr, int value){
    int low, high, mid;
    low = 0;
    high = arr.length - 1;

    while (low <= high){
        mid = (low + high) / 2;

        if(value == arr.A[mid]){
            return mid;

        }else if(value < arr.A[mid]){
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }

    return -1;
}


/*          BINARY SEARCH: RECURRSION
=============================================================*/
int RBinSearch(struct Array arr, int low, int high, int value){
    int mid;

    mid = (low + high) / 2;
    if(value == arr.A[mid]){
        return mid;

    }else if(value < arr.A[mid]){
        return RBinSearch(arr, low, mid - 1, value);
    }else {
        return RBinSearch(arr, mid + 1, high, value);
    }

    return -1;
}


/*          GET(index) 
=============================================================*/
int Get(struct Array arr, int index){
    return arr.A[index];
}

/*          SET(index, value) 
=============================================================*/
int Set(struct Array *arr, int index, int value){
    arr->A[index] = value;
}

/*          MAX() 
=============================================================*/
int Max(struct Array arr){
    int max = arr.A[0];
    int i;
    for (i = 0; i < arr.length; i++){
        if(max < arr.A[i]){
            max = arr.A[i];
        }    
    }

    return max;    
}


/*          MIN() 
=============================================================*/
int Min(struct Array arr){
    int min = arr.A[0];
    int i;
    for (i = 0; i < arr.length; i++){
        if(min > arr.A[i]){
            min = arr.A[i];
        }    
    }

    return min;    
}


/*          SUM() 
=============================================================*/
int Sum(struct Array arr){
    int sum = 0;
    int i;

    for(i = 0; i < arr.length; i++){
        sum += arr.A[i];
    }

    return sum;
}


/*          SUM(): Recurrsion 
=============================================================*/
int Sum_Recurrsion(struct Array arr, int n){
    int sum = 0;
    int i;
    if ( n < 0) return 0;
    else 
        return Sum_Recurrsion(arr, n - 1) + arr.A[n];

}



/*          Average(): 
=============================================================*/
float Average(struct Array arr){
    return (float) (Sum_Recurrsion(arr, arr.length - 1) + arr.A[arr.length]) / arr.length;
}




int main() {
    struct Array arr = {{12, 3, 44, 15, 6, 55}, 20, 6};
    int n, i;

    // Display the numbers
    // Insert(&arr, 3, 10);
    Display(arr);
    // Delete(&arr, 3);
    // Display(arr);
    // printf("%d ", Linear_search_transposition(&arr, 5));
    // printf("index: %d", binary_search(arr, 11));
    // printf("index: %d", RBinSearch(arr, 0, arr.length - 1, 2));
    // printf("%d", Get(arr, 3));
    // printf("%d", Set(&arr, 3, 15));
    // printf("%d", Get(arr, 3));
    // printf("%d", Max(arr));
    // printf("%d", Sum_Recurrsion(arr, arr.length));
    printf("%f", Average(arr));

    return 0;
}




/*
int main() {
    struct Array arr;
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &arr.size);

    // initialize the array
    arr.A = (int *) malloc(arr.size * sizeof(int));
    arr.length = 0;


    // getting the values
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    printf("Enter all elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);

    arr.length = n;




    // Display the numbers
    Display(arr);



    return 0;
}
*/


