public class Main {



    public static void main(String[] args){
        System.out.println("Data Structure & Algorithm!");

        // Insertion Sort
        InsertionSort insertionSort = new InsertionSort();
        //insertionSort.execute();


        MergeSort mergeSort = new MergeSort();
        //mergeSort.execute();

        QuickSort quickSort = new QuickSort();
        //quickSort.execute();

        //BinarySearch binarySearch = new BinarySearch();
        //binarySearch.execute();


        BubbleSort bubbleSort = new BubbleSort();
        //bubbleSort.execute();


        BinaryTree binaryTree = new BinaryTree();
        binaryTree.add(6);
        binaryTree.add(4);
        binaryTree.add(8);
        binaryTree.add(3);
        binaryTree.add(5);
        binaryTree.add(7);
        binaryTree.add(9);

        int value = 0;
        if(binaryTree.containsNode(value)){
            System.out.println("Found");
        }

    }
}
