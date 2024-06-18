class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // sort(bills.begin(),bills.end());
        int f=0,t=0;
        for(auto it:bills){
            if(it==5)f++;
            else if(it==10){
                if(f)f--,t++;
                else return false;
            }
            else{
                if(f&&t)f--,t--;
                else if(f>2)f-=3;
                else return false;
            }
        }
        return true;
    }
};