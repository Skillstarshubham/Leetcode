class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int o=0,e=0,ans=0,mod=int(1e9+7);
        for(auto it:arr){
            if(it%2==0)
            e++;
            else
            {
                swap(o,e);
                o++;
            }
            ans=((ans%mod)+o%mod)%mod;
        }
        return ans;
    }
};