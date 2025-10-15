class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int start=0;
        int end=0;
        for(auto it:meetings){
            if(it[1]>end){
                days-=it[1]-max(end,it[0]-1);
                end=it[1];
            }
        }
        return days;
    }
};