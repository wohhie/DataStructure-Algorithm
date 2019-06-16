public class InsertionSort {


    private void insertionSort(int[] arr){
        int n = arr.length;
        int j, value;
        for (int i = 1; i < n; i++){
            value = arr[i];
            j = i - 1;      // i = 1 : j = 0

            while (j >= 0 && arr[j] > value){
                arr[j+1] = arr[j];
                j = j - 1;
            }
            arr[j+1] = value;
        }

    }

    public void execute() {
        int[] arr = {3, 2, 0, 6, 4};
        insertionSort(arr);

        System.out.println("Sorted Order: ");
        // print the sorted order array
        for (int i = 0; i < arr.length; i++){
            System.out.println(arr[i]);
        }

    }
}
