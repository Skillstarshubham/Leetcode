class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==t)
            return m;
            if(nums[m]>=nums[l]){
                if(nums[l]<=t&&nums[m]>=t)r=m-1;
                else l=m+1;
            }
            else{
                if(nums[r]>=t&&nums[m]<=t)l=m+1;
                else r=m-1;
            }
        }
        return -1;
    }
};