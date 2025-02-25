class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int c=1;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]&&c==k)return true;
            if(s[i]!=s[i-1])c=0;
            c++;
        }
        return c==k;
    }
};