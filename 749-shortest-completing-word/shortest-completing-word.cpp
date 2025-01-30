class Solution {
public:
    string shortestCompletingWord(string plate, vector<string>& words) {
        string ans="";
        for(auto it:words){
            map<char,int>mp;
            for(auto s:it){
                char t=tolower(s);
                if(t==' '||(t>='0'&&t<='9'))
                continue;
                else
                mp[t]++;
            }
            int f=0;
            for(auto s:plate){
                char t=tolower(s);
                if(t==' '||(t>='0'&&t<='9'))
                continue;
                else{
                    if(mp[t]>0)
                    mp[t]--;
                    else{
                    f=1;
                    break;}
                }
            }
            if(f==0){
                if(ans=="")
                ans=it;
                else if(ans.size()>it.size())
                ans=it;
            }
        }
        return ans;
    }
};