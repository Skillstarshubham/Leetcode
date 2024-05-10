class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        std::sort(happiness.begin(), happiness.end());
        int subtractor = 0;
        int n = happiness.size(), i = n - 1;
        uint64_t res = 0;
        while (k && i >= 0) 
        {
            if (happiness[i] - subtractor >= 0) 
            {
                res += happiness[i] - subtractor;
                subtractor++;
                k--;
                i--;
            } else break;
        
        }
        return res;
    }
};