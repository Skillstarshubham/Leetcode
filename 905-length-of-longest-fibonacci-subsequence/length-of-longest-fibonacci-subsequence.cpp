class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int ans=0;
        set<int>st(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int c=2;
                int a=arr[i],b=arr[j];
                while(st.count(a+b)){
                    b=a+b;
                    a=b-a;
                    c++;
                }
                ans=max(ans,c);
            }
        }
        return ans>2? ans:0;
    }
};