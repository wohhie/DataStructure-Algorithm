
public class QuickSort {


    /**
     * Partition Index
     * @param A is the whole array
     * @param start - start index
     * @param end - end index
     * @return - return the partition index
     */
    private int partitonIndex(int[] A, int start, int end) {
        int pivot = A[end];
        int partitionIndex = start;     // setting the partition index as the start initially

        for (int i = start; i < end; i++){
            if (A[i] < pivot){
                // swap if element is less than pivot
                A[i] = swap(A[partitionIndex], A[partitionIndex] = A[i]);
                partitionIndex++;
            }
        }

        A[partitionIndex] = swap(A[end], A[end] = A[partitionIndex]);

        return partitionIndex;
    }

    private int swap(int itself, int dummy){
        return itself;
    }

    /**
     *
     * @param A with the whole array
     * @param start start index
     * @param end   end index
     */
    private void quickSort(int[] A, int start, int end) {
        if (start < end){
            int partitionIndex = partitonIndex(A, start, end);
            quickSort(A, start, partitionIndex - 1);
            quickSort(A, partitionIndex + 1, end);
        }
    }


    public void execute(){
        int[] A = {7, 2, 1, 6, 8, 5, 3, 4};
        System.out.print("Unsorted: ");
        for (int i = 0; i < A.length; i++){
            System.out.print(A[i] + " ");
        }

        System.out.println();

        // Sort the array with Quicksort algorithm.
        quickSort(A, 0, A.length - 1);


        System.out.print("Sorted: ");
        for (int i = 0; i < A.length; i++){
            System.out.print(A[i] + " ");
        }
        System.out.println();

    }



}
