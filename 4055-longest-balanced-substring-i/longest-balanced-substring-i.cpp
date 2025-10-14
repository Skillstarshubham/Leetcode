class Solution {
public:
    int longestBalanced(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int>counter(26,0);
            for(int j=i;j<s.size();j++){
                counter[s[j]-'a']++;
                int c=0;
                int f=1;
                for(auto it:counter){
                    if(it!=0){
                        if(c==0)
                        c=it;
                        else{
                            if(c!=it){
                                f=0;
                            break;
                            }
                        }
                    }
                }
                if(f==1)
                ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};