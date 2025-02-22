class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        long long ans=0;
        sort(pizzas.rbegin(),pizzas.rend());
        int n=pizzas.size();
        int c=n/4;
        int p=0;
        // 1 2 2 2 2 3 3 3 4 4 5 5
        for(int i=0;i<(c+1)/2;i++){
            ans+=pizzas[p++];
        }
        for(int i=0;i<c/2;i++){
            ans+=pizzas[p+1];
            p+=2;
        }
        return ans;
    }
};