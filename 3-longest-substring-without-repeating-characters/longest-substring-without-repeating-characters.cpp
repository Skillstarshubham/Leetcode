class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int t=0;
        map<char,int>mp;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])==0||mp[s[i]]<t)
            ans=max(ans,i-t+1);
            else
            t=mp[s[i]]+1;
            mp[s[i]]=i;
        }
        return ans;
    }
};