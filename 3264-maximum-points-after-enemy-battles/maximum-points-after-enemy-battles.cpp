class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        sort(enemyEnergies.begin(),enemyEnergies.end());
        int min=enemyEnergies[0];
        long long ans=currentEnergy/min;
        currentEnergy%=min;
        int i=enemyEnergies.size()-1;
        while(i>0&&ans>0){
            cout<<ans<<endl;
            currentEnergy+=enemyEnergies[i--];
            ans+=currentEnergy/min;
            currentEnergy=currentEnergy%min;
        }
        return ans;
    }
};