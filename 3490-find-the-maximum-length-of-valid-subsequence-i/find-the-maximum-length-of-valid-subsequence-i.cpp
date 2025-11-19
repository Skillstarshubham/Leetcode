class Solution {
public:
   
    int maximumLength(vector<int>& nums) {
        int odd=0,even=0, both=0;
        int c=nums[0]%2;
        for(auto it:nums){
            if(it%2==0)
                even++;
            else
                odd++;
            if(it%2==c){
                both++;
                c=1-c;
            }
        }
        return max(both,max(even,odd));
    }
};