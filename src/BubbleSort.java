public class BubbleSort {

    public void bubbleSort(int arr[]){
        int length = arr.length;
        for (int i = 0; i < length - 1; i++){
            for (int j = 0; j < length - i - 1; j++){
                if (arr[j] > arr[j+1]){
                    // then it will swap
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }


    /**
     * Bubble sort with optimization
     * @param arr
     * @param n
     */
    public void bubbleSort(int arr[], int n){
        int i, j, temp;
        boolean swapped;
        for (i = 0; i < n - 1; i++) {
            swapped = false;
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap arr[j] and arr[j+1]
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }

            // IF no two elements were
            // swapped by inner loop, then break
            if (swapped == false)
                break;
        }
    }



    public void execute(){
        int arr[] = {5, 1, 4, 2, 8};
        int n = arr.length;
        bubbleSort(arr, n);
        //bubbleSort(arr);
        System.out.println("Sorted Array: ");
        for (int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
