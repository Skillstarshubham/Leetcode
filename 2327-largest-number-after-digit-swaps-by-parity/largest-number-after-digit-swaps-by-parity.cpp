class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>p,q;
        int f=0;
        vector<int>arr;
        while(num){
        int r=num%10;
            arr.push_back(r);
            num/=10;
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0)
                p.push(arr[i]);
            else
                q.push(arr[i]);
        }
        int ans=0;
        int i=0;
        while(i<arr.size()){
            if(arr[i]%2==0){
            ans=ans*10+p.top();
            p.pop();}
            else{
            ans=ans*10+q.top();
            q.pop();
            }
            i++;
        }
        return ans;
    }
};