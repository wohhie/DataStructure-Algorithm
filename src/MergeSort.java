public class MergeSort {


    private void mergeSort(int arr[], int l, int m, int r){

    }

    /**
     *
     * @param arr   array
     * @param low   first index
     * @param high  length
     */
    private void sort(int[] arr, int low, int high) {
        if (low < high){
            // Find the middle point
            int mid = (low + high) / 2;
            System.out.println(mid);

            // sort the first and second halves
            sort(arr, low, mid);
            sort(arr, mid + 1, high);

            // Merge the sorted haves
            mergeSort(arr, low, mid, high);
        }
    }

    private void print(int arr[]){
        int n = arr.length;
        for (int i = 0; i < n; i ++){
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }


    public void execute(){
        int arr[] = {12, 11, 13, 5, 6, 7};
        // System.out.println(arr.length);
        // Array will be printed.
        //print(arr);

        sort(arr, 0, arr.length - 1);
    }

}
