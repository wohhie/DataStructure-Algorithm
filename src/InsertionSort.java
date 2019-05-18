public class InsertionSort {



    private void insertionSort(int[] arr){
        for (int i = 1; i < arr.length; i++){
            int key = arr[i];
            int j = i - 1; // 0

            while (j > - 1 && arr[j] > key){        // :0  :3
                arr[j + 1] = arr[j];                // arr[1] = arr[0] // before: 3 current: 2
                j = j - 1;
            }

            arr[j + 1] = key;                       // before: 2 : current: 2
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
