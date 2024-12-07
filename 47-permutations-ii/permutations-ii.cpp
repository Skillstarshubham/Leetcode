class Solution {
public:
    set<vector<int>>st;
    void fun(vector<int>&nums,int curr){
        if(curr==nums.size()-1){
            st.insert(nums);
            return;
        }
        for(int i=curr;i<nums.size();i++){
            swap(nums[i],nums[curr]);
            fun(nums,curr+1);
            swap(nums[i],nums[curr]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        fun(nums,0);
        for(auto it:st)
        ans.push_back(it);
        return ans;
    }
};