class Solution {
public:
    int jump(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=max(i+nums[i],nums[i-1]);
        }
        int ans=0;
        int i=0;
        while(i<nums.size()-1){
            ans++;
            i=nums[i];
        }
        return ans;
    }
};