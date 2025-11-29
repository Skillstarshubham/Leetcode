class Solution {
public:
    void fun(int n,string s,vector<string>&ans){
        if(n==0){
            ans.push_back(s);
            return;
        }
        s.push_back('1');
        fun(n-1,s,ans);
        s.pop_back();
        if(s.size()==0||s.back()=='1'){
            s.push_back('0');
            fun(n-1,s,ans);
            s.pop_back();
        }
        return;
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        fun(n,"",ans);
        return ans;

    }
};