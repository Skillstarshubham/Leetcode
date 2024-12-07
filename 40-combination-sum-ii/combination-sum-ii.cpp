class Solution {
public:
    set<vector<int>>st;
    void fun(vector<int>& candidates,vector<int>& temp,int start,int target){
        if(target==0){
            st.insert(temp);
            return;
        }
        if(target<0)return;
        for(int i=start;i<candidates.size();i++){
            if(i!=start&&candidates[i]==candidates[i-1])continue;
            temp.push_back(candidates[i]);
            fun(candidates,temp,i+1,target-candidates[i]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        fun(candidates,temp,0,target);
        vector<vector<int>>ans;
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};