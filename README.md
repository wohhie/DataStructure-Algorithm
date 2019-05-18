# DataStructure-Algorithm

### Insertion Sort
The Insertion Sort algorithm and have a look at its Java implementation.

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


> The time complexity of **INSERTION-SORT** is **O(n^2)**.  
> The algorithm sorts in place so its **space complexity** is **O(1)** for the imperative implementation.
> **O(n)** for the recursive implementation.