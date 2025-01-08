public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        for(int j=0;j<nums.Length;j++){
            int t=target-nums[j];
            for(int i=j+1;i<nums.Length;i++){
                if(t==nums[i])
                return [i,j];
            }
        }
        return [0,0];
    }
}