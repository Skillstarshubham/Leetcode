class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        map<int,int>mp;
        long long n=nums.size();
        long long c=n*(n-1)/2;
        for(int i=0;i<n;i++){
            c-=mp[nums[i]-i];
            mp[nums[i]-i]++;
        }
        return c;
    }
};