class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        vector<vector<int>>dp(k,vector<int>(k,0));
        int ans=0;
        for(auto it:nums){
            for(int i=0;i<k;++i){
                int r=it%k;
                dp[r][i]=dp[i][r]+1;
                ans=max(ans,dp[r][i]);
            }
        }
        return ans;
    }
};