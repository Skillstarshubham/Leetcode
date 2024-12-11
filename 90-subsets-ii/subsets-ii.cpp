class Solution {
public:
    
    set<vector<int>>st;
    void fun(vector<int>nums,int curr,vector<int>temp){
        st.insert(temp);
        for(int i=curr;i<nums.size();i++){
            temp.push_back(nums[i]);
            fun(nums,i+1,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        fun(nums,0,temp);
        vector<vector<int>>ans;
        for(auto it:st)
        ans.push_back(it);
        return ans;
    }
};