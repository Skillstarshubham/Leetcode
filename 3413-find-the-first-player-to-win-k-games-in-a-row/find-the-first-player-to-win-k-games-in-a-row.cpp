class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int c=0;
        if(k>=skills.size()){
            int ans=0;
            int maxi=0;
            for(int i=0;i<skills.size();i++){
                if(skills[i]>maxi){
                    maxi=skills[i];
                    ans=i;
                }
            }
            return ans;
        }
        for(int i=0;i<skills.size();i++){
            for(int j=i+1;j<skills.size();j++){
                if(skills[i]>skills[j]){
                c++;
                if(c==k)
                return i;
                skills.push_back(skills[j]);
                }
                else{
                c=1;
                if(c==k)
                return j;
                skills.push_back(skills[i]);
                i=j-1;
                break;
                }
                
            }
        }
        return 0;
    }
};