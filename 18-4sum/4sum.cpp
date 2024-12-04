class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int k=j+1,l=n-1;
                long long target=(long long)t-(long long)nums[i]-(long long)nums[j];
                while(k<l){
                    long long sum=nums[k]+nums[l];
                    if(sum==target)st.insert({nums[i],nums[j],nums[k],nums[l]});
                    if(sum<target)k++;
                    else if(sum>target)l--;
                    else{
                        k++,l--;
                    }
                }
            }
        }
        for(auto it:st)
        ans.push_back(it);
        return ans;
    }
};