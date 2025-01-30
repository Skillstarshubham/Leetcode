class Solution {
public:
    
    int mincostcalculator(vector<int>& cost,int s,vector<int>&dp){
        if(s>=cost.size())return 0;
        if(dp[s]!=-1)
        return dp[s];
        return dp[s]=cost[s]+min(mincostcalculator(cost,s+1,dp),mincostcalculator(cost,s+2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(1001,-1);
        return min(mincostcalculator(cost,0,dp),mincostcalculator(cost,1,dp));
    }
};