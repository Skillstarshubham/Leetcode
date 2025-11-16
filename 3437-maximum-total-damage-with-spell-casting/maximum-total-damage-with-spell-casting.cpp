class Solution {
#define ll long long 
public:
    long long fun(vector<long long>& dp,map<int,int>&mp,vector<int>&arr,int index){
        if(index==arr.size())return 0;
        if(dp[index]!=-1)return dp[index];
        long long skip = fun(dp,mp,arr,index+1);
        int nextindex=index+1;
        while(nextindex<arr.size()&&arr[nextindex]-arr[index]<=2)
            nextindex++;
        long long take=0;
        take = ((1ll)*mp[arr[index]] * arr[index]) + fun(dp, mp, arr, nextindex);
        
        return dp[index]=max(skip,take);
    }
    long long maximumTotalDamage(vector<int>& power) {
        sort(power.begin(),power.end());
        map<int,int>mp;
        for(auto it:power)
            mp[it]++;
        vector<int>arr;
        for(auto it:mp)
            arr.push_back(it.first);
        vector<long long>dp(arr.size(),-1);
        return fun(dp,mp,arr,0);
    }
};