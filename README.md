# DataStructure-Algorithm

## Data Structure:

## Finding a pair of element with sum K in a UNSORTED array: 
Given an absolute unsorted array arr[] and a number K, the task is to find a pair of elements in the given array that sum to K.
| 6 | 3 | 8 | 10 | 16 | 7 | 5 | 2 | 9 | 14 |
|---|---|---|----|----|---|---|---|---|----|
| 0 | 1 | 2 | 3  | 4  | 5 | 6 | 7 | 8 |  9 |

#### Pseudocode: 1st Solution
```pseudo
findPairsOfSum(A, n, k)
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(A[i] + A[j] == k)
                print("%d + %d = %d", A[i], A[j], k)
```
###`Analysis: Time-Complexity` : O(n<sup>2</sup>)
n - 1 + n - 2 + n - 3 + . . . . + 3 + 2 + 1 </br>
n(n - 1) / 2 </br>
O(n^2)  </br>


#### Pseudocode: 2nd Solution: Using Hash Array
```pseudo
findPairsOfSum(A, n, max, k)
    H[max] = {0}; // creating a hash array with the size of maximum number in A
    for(i = 0; i < n; i++)
        if(H[k - A[i]] != 0 && k - A[i] > 0)
            print("%d +  %d = %d", A[i], k - A[i], k)        
```
###`Analysis: Time-Complexity`: O(n)


## Finding a pair of element with sum K in a SORTED array
Given an absolute sorted array arr[] and a number K, the task is to find a pair of elements in the given array that sum to K.
| 1 | 3 | 4 | 5 | 6 | 8 | 9 | 10 | 12 | 14 |
|---|---|---|---|---|---|---|----|----|----|
| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7  | 8  |  9 |
| i |   |   |   |   |   |   |    |    |  j |

#### Pseudocode: Solution
```pseudo
findPairsOfSum(A, n, k)
    i = 0; j = n - 1
    while(i < j){
        if(A[i] + A[j] == k){ 
            print("%d + %d = %d", A[i], A[j], k)
            i++
            j--
        }
        else if(A[i] + A[j] < k)
            i++
        else
            j--
    }
```
###`Analysis: Time-Complexity`: O(n)



## Finding minimum and maximum in an array
#### Pseudocode: 2nd Solution: Using Hash Array
```pseudo
findMinMax(A, n)
    min = A[0]
    max = A[0]
    for(i = 0; i < n; i++){
        if( min < A[i]{
            min = A[i]
        else if(max > A[i])
            max = A[i]
    }
    
    print("min: %d and max: %d", min, max)
```

# Strings
## Problem 1: Length of a string: Example s = "Welcome"
As we know, the best way to find the length of a string is by using the strlen() function. However, in this example, we will find the length of a string manually.
| W | E | L | C | O | M | E | \0 | 
|---|---|---|---|---|---|---|----|
| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7  | 

#### Pseudocode: solution
```pseudo
main() {
    char *s = "welcome"
    for(i = 0; s[i] != '0'; i++){}
    printf("Length: %d", i);
}
```
###`Analysis: Time-Complexity`: O(n)


## Problem 2: Change string from uppercase to lower / lower to upper case
As we know, the best way to find the length of a string is by using the strlen() function. However, in this example, we will find the length of a string manually.

#### Pseudocode: solution
```pseudo
main() {
    char A[] = "wElComE"
    for(i = 0; A[i] '\0'; i++){
        if(A[i] >= 65 && A[i] <= 90){
            A[i] += 32;
        }else if(A[i] >= 97 && A[i] <= 122){
            A[i] -= 32;
        }
    }

    print("%s", A);
}
```
###`Analysis: Time-Complexity`: O(n)



## Problem 3: Finding Duplicates in a string using Bitwise Operations

#### Pseudocode: solution
```pseudo
INPUT: finding
OUTPUT: i duplicated
        n duplicated
        
find_duplicates_bitwise(char A[])
    long int H = 0, x = 0
    for(i = 0; A[i] != '\0'; i++){
        x = 1
        x = x << A[i] - 97
        if ((x & H) > 0)
            print("%c duplicated, A[i])
        else 
            H = x | H
```
###`Analysis: Time-Complexity`: O(n)
























## Insertion Sort
The Insertion Sort algorithm and have a look at its Java implementation.


![Algorithm](https://user-images.githubusercontent.com/13005159/58052772-4ce16f80-7b30-11e9-8d08-02eb91c682b4.png)

##### Pseudocode
```pseudo
INSERTION-SORT(A)
for i=2 to A.length
    key = A[i]
    j = i - 1 
    while j > 0 and A[j] > key
        A[j+1] = A[j]
        j = j - 1
    A[j + 1] = key
```


> The time complexity of **INSERTION-SORT** is **O(n<sup>2</sup>)**.  
> The algorithm sorts in place so its **space complexity** is **O(1)** for the imperative implementation.
> **O(n)** for the recursive implementation.



## Merge Sort
The Merge Sort algorithm and have a look at its Java implementation.

##### Pseudocode
```pseudo
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
```


Time Complexity: Sorting arrays on different machines. Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.   
**T(n) = 2T(n/2) + \Theta(n)**   
The above recurrence can be solved either using Recurrence Tree method or Master method. 
Time complexity of Merge Sort is \Theta(nLogn) in all 3 cases (worst, average and best) as merge sort always divides the array in two halves and take linear time to merge two halves.

Auxiliary Space: O(n)

Algorithmic Paradigm: Divide and Conquer





## Quick Sort
The Quick Sort algorithm and have a look at its Java implementation.

##### Pseudocode
```pseudo
/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}
```


Time Complexity: The solution of above recurrence is **\theta(n2)**.   
> The solution of above recurrence is \theta(nLogn).    It can be solved using case 2 of **Master Theorem**.   

Algorithmic Paradigm: Divide and Conquer








## Bubble Sort
The Quick Sort algorithm and have a look at its Java implementation.

##### Pseudocode
```pseudo
/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}
```


Time Complexity: The solution of above recurrence is **\theta(n2)**.   
> The solution of above recurrence is \theta(nLogn).    It can be solved using case 2 of **Master Theorem**.   

Algorithmic Paradigm: Divide and Conquer
