class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<pair<int,int>>arr;
        for(auto it:nums)
        {
            int p=it;
            int s=0;
            while(p){
                s+=p%10;
                p/=10;
            }
            arr.push_back({s,it});
        }
        sort(arr.begin(),arr.end());
        int ans=-1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i].first==arr[i+1].first)
            ans=max(ans,arr[i].second+arr[i+1].second);
        }
        return ans;
    }
};