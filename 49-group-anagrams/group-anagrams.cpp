class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto it:strs){
        string w=it;
        sort(it.begin(),it.end());
        mp[it].push_back(w);
        }
        vector<vector<string>>ans;
        for(auto it:mp)
        ans.push_back(it.second);
        return ans;

    }
};