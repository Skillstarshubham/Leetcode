class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int temp=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)>abs(target-temp))
                sum=temp;
                if(target>temp)j++;
                else if(target<temp)k--;
                else return target;
            }
        }
        return sum;
    }
};