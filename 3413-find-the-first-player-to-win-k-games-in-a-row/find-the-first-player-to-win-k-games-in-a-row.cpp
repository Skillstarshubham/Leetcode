class Solution {
public:
        int findWinningPlayer(vector<int>& A, int k) {
        int i = 0, cur = 0, n = A.size();
        for (int j = 1; j < n; ++j) {
            if (A[i] < A[j]) {
                cur = 0;
                i = j;
            }
            if (++cur == k) break;
        }
        return i;
    }
};