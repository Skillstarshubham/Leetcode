class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l=0,h=nums.size()-1;
        vector<int>ans(h+1,0);
        for(int i=0,j=h;i<nums.size();i++,j--){
            if(nums[i]<pivot)
            ans[l++]=nums[i];
            if(nums[j]>pivot)
            ans[h--]=nums[j];
        }
        while(l<=h){
            ans[l++]=pivot;
        }
        return ans;
    }
};