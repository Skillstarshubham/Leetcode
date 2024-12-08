class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int r=0,c=0,m=matrix.size()-1,n=matrix[0].size()-1;
        while(1){
            for(int i=c;i<=n;i++)
            ans.push_back(matrix[r][i]);
            r++;
            if(r>m)break;
            for(int i=r;i<=m;i++)
            ans.push_back(matrix[i][n]);
            n--;
            if(c>n)break;
            for(int i=n;i>=c;i--)
            ans.push_back(matrix[m][i]);
            m--;
            if(r>m)break;
            for(int i=m;i>=r;i--)
            ans.push_back(matrix[i][c]);
            c++;
            if(c>n)break;
        }
        return ans;
    }
};