class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans=-1;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=maxi){
                if(nums[i]>=2*maxi){
                    ans=i;
                }
                else{
                    ans=-1;
                }
                maxi=nums[i];
            }
            else{
                if(nums[i]*2>maxi){
                    ans=-1;
                }
            }
        }
        return ans;
    }
};