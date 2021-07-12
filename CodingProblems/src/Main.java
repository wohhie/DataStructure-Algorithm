import java.util.*;

public class Main {



    private static List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        for (int i = 0; i < nums.length && nums[i] <= 0; i++){
            if (i == 0 || nums[i - 1] != nums[i]){      // check curr and prev number
                twoSum(nums, i, result);
            }
        }
        return result;
    }

    private static void twoSumII(int[] nums, int i, List<List<Integer>> result) {
        int low = i + 1;
        int high = nums.length - 1;
        while (low < high){
            int sum = nums[i] + nums[low] + nums[high];
            if (sum < 0) {
                low++;
            } else if(sum > 0){
                high--;
            }else{
                result.add(Arrays.asList(nums[i], nums[low++], nums[high--]));
                while(low < high && nums[low] == nums[low - 1])
                    low++;
            }
        }
    }


    private static void twoSum(int[] nums, int i, List<List<Integer>> result){
        HashSet<Integer> hashSet = new HashSet<>();
        for (int j = i + 1; j < nums.length; j++){
            int x = - nums[i] - nums[j];
            if (hashSet.contains(x)){
                result.add(Arrays.asList(nums[i], nums[j], x));
                while (j+1 < nums.length && nums[j] == nums[j+1]) j++;
            }
            hashSet.add(nums[j]);
        }
    }



    private static int lengthOfLongestSubString(String s){
        // sliding window approach
        int i = 0; int max = 0;
        Set<Character> seen = new HashSet<>();
        for (int j = 0; j < s.length(); j++){
            Character ch = s.charAt(j);
            while (seen.contains(ch)){
                seen.remove(s.charAt(i++));
            }

            seen.add(ch);
            max = Math.max(max, j - i + 1);     // (0, 0 - 0 + 1); 1,
                                                // (1, 1 - 0 + 1); 2;
        }

        return max;
    }



    public static boolean canJump(int[] nums) {
        int len = nums.length - 1;
        int reachableIndex = len;

        for (int i = len; i >= 0; --i) {
            if (i + nums[i] >= reachableIndex) {
                reachableIndex = i;
            }
        }

        return reachableIndex == 0;
    }

    public static String findReplaceString(String s, int[] indices, String[] sources, String[] targets) {
        int n = s.length(), k = indices.length;
        int[] replace = new int[n];

        for (int i = 0; i < k; i++) {
            int index = indices[i];
            if (s.startsWith(sources[i], index))
                replace[index] = i + 1;
        }
        StringBuilder sb = new StringBuilder();
        int i = 0;
        while (i < n) {
            if (replace[i] == 0) {
                sb.append(s.charAt(i++));
            } else {
                int j = replace[i] - 1;
                i += sources[j].length();
                sb.append(targets[j]);
            }
        }
        return sb.toString();

    }


        public static void main(String[] args) {
        int[] nums = new int[]{2,3,1,1,4};
//        List<List<Integer>> result = threeSum(nums);
        //System.out.println(result);


//        String string = "abcabcbb";
//        System.out.println(lengthOfLongestSubString(string));
//        System.out.println(canJump(nums) + "");

          System.out.println(findReplaceString(
                  "abodckdcd",
                  new int[]{0,7},
                  new String[]{"ab", "cd"},
                  new String[]{"eee", "ffff"}
          ));

    }
}
