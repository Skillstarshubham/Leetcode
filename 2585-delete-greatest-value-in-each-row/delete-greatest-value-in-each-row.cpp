class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        vector<priority_queue<int>>arr(grid.size());
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                arr[i].push(grid[i][j]);
            }
        }
        int ans=0;
        for(int i=0;i<grid[0].size();i++){
            int c=INT_MIN;
            for(int j=0;j<arr.size();j++){
                c=max(c,arr[j].top());
                arr[j].pop();
            }
            ans+=c;
        }
        return ans;
    }
};