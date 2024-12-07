class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>& nums,int curr){
        if(curr==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int j=curr;j<nums.size();j++){
            swap(nums[j],nums[curr]);
            fun(nums,curr+1);
            swap(nums[j],nums[curr]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        fun(nums,0);
        return ans;
    }
};