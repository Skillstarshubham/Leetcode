class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        vector<int>arr;
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end(),greater<int>());
            int c=limits[i];
            for(int j=0;j<grid[0].size();j++){
                if(c==0)
                break;
                arr.push_back(grid[i][j]);
                c--;
            }
        }
        sort(arr.begin(),arr.end());
        long long ans=0;
        for(int i=arr.size()-1;i>=0;i--){
            if(k==0)break;
            ans+=arr[i];
            k--;
            
        }
        return ans;
    }
};