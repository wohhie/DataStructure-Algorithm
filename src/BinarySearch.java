public class BinarySearch {


    public static int binarySearch(int[] numbers, int item){
        int low = 0;
        int high = numbers.length - 1;
        int mid;
        int guess;

        while (low <= high){
            mid = (low + high);

            if (numbers[mid] == item) {
                return mid;
            }

            if (numbers[mid] > item){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return -1;
    }


    public void execute(){
        int[] numbers = {1, 4, 5, 16, 45, 67, 87, 102, 105, 108};

        int result = binarySearch(numbers, 16);
        if (result != -1)
            System.out.println("Item on :"  + result + "th index!");
        else{
            System.out.println("Not in the numbers!");
        }




    }
}
