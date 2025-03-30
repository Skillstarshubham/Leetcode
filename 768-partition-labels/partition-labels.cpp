class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> index(26,0);
        vector<int> ans;
        int n=s.size();
        for(int i=0;i<n;i++)
            index[s[i]-'a']=i;
        int start=0,end=0;
        for(int i=0;i<n;i++){
            end=max(end,index[s[i]-'a']);
            if(end==i){
                ans.push_back(end-start+1);
                start=i+1;
            }
        }
        return ans;
    }
};