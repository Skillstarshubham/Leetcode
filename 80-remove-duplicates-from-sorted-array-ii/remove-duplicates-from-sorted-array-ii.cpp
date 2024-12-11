class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=0;
        for(auto it:nums){
            if(ans<=1||nums[ans-2]!=it)
                nums[ans++]=it;
        }
        return ans;
    }
};