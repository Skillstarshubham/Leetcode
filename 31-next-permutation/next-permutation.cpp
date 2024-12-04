class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i=nums.size()-1;
        while(i>0){
            if(nums[i]>nums[i-1]){
                sort(nums.begin()+i,nums.end());
                for(int j=i;j<nums.size();j++)
                    if(nums[i-1]<nums[j]){
                        swap(nums[i-1],nums[j]);
                        return;
                    }
            }
            else
            i--;
        }
        sort(nums.begin(),nums.end());
    }
};