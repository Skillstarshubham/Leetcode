class Solution {
public:
    vector<string>ans;
    void fun(string s,int n, int curr){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        s.push_back('1');
        fun(s,n,1);
        s.pop_back();
        if(curr!=0){
            s.push_back('0');
            fun(s,n,0);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        string s="";
        fun(s,n,1);
        return ans;
    }
};