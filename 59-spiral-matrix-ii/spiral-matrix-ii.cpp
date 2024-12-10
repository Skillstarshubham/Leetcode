class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r=0,c=0,p=n-1,q=n-1;
        int t=1;
        vector<vector<int>>ans(n,vector<int>(n,0));
        while(1){
            for(int i=c;i<=q;i++)
                ans[r][i]=t++;
            r++;
            for(int i=r;i<=p;i++)
                ans[i][q]=t++;
            q--;
            for(int i=q;i>=c;i--)
                ans[p][i]=t++;
            p--;
            for(int i=p;i>=r;i--)
                ans[i][c]=t++;
            c++;
            if(t>n*n)break;
        }
        return ans;
    }
};