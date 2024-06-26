class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(), c.end());
        int n = c.size();
        for(int i = 0; i < n; i++) {
            if(c[i] >= n - i)
                return n - i;
        }
        return 0;
    }
};