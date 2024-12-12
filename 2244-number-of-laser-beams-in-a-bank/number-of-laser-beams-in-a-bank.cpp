class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        vector<int>arr;
        for(auto it:bank){
            int c=0;
            for(auto i:it){
                if(i=='1')
                c++;
            }
            if(c>0)
            arr.push_back(c);
        }
        for(int i=1;i<arr.size();i++){
            ans+=arr[i]*arr[i-1];
        }
        return ans;
    }
};