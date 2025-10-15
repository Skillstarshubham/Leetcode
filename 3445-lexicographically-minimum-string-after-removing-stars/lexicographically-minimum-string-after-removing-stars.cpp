class Solution {
public:
    string clearStars(string s) {
        vector<vector<int>>map(26);
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                for(int j=0;j<26;j++){
                    if(map[j].size()>0){
                        s[map[j].back()]='*';
                        map[j].pop_back();
                        break;
                    }
                }
            }
            else
            map[s[i]-'a'].push_back(i);
        }
        string ans="";
        for(auto it:s){
            if(it!='*')
            ans+=it;
        }
        return ans;
    }
};