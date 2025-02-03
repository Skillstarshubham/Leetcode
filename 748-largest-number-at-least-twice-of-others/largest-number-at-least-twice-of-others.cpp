class Solution {
public:
    int dominantIndex(vector<int>& nums)
     {
        int m=0;
        int n=0;
        int t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>m)
            {
                m=nums[i];
                n=i;
            }
        }
        for (int j=0;j<nums.size();j++)
        {
           if(j==n)
           {
            continue;
           }
           else
           {
              if(nums[j]*2<=m)
              {
                
                continue;
              }
              else
              {
                n=-1;
                break;
              }
           }
        }
     
       return n; 
    }
};