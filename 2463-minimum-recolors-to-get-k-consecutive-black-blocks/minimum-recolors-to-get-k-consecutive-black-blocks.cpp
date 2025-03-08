class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans=INT_MAX;
        int c=0;
        for(int i=0;i<blocks.size();i++){
            if(blocks[i]=='W')
            c++;
            if(i>=k-1){
                ans=min(c,ans);
                if(blocks[i-k+1]=='W')
                c--;
            }
        }
        return ans;
    }
};