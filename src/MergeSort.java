public class MergeSort {




    public void printArray(int[] array){
        for (int i = 0; i < array.length; i++){
            System.out.println(array[i]);
        }
    }


    public void execute(){
        // System.out.println(arr.length);
        // Array will be printed.
        //print(arr);

        int arr[] = {12, 11, 13, 5, 6, 7};


        mergeSort(arr);


        System.out.println("\n");
        System.out.println("Sorted array is");

        for(int i=0; i<arr.length; i++)
            System.out.print(arr[i]+" ");
    }



    private void mergeSort(int[] arr) {
        if (arr == null){
            return;
        }


        if (arr.length > 1){
            // if array length > 1 then:

            // finding the mid
            int mid = (arr.length) / 2;

            // split the left side
            int[] left = new int[mid];
            int[] right = new int[arr.length - mid];

            for (int i = 0; i < mid; i++){
                left[i] = arr[i];
            }

            for (int i = mid; i < arr.length; i++){
                right[i - mid] = arr[i];
            }


            mergeSort(left);
            mergeSort(right);


            int i = 0;
            int j = 0;
            int k = 0;
            while (i < left.length && j < right.length){
                if (left[i] < right[j]){
                    arr[k] = left[i];
                    i++;
                }else{
                    arr[k] = right[j];
                    j++;

                }

                k++;
            }


            while (i < left.length){
                arr[k] = left[i];
                i++;
                k++;
            }

            while (j < right.length){
                arr[k] = right[j];
                j++;
                k++;
            }

        }

    }

}
