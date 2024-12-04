class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer>mp=new HashMap<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            mp.put(nums[i],i);
        }
        for(int i=0;i<n;i++){
            int r=target-nums[i];
            if(mp.containsKey(r)&&mp.get(r)!=i)
            return new int[]{i,mp.get(r)};
        }
        return new int[]{};
    }
}