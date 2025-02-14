class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=part.size();
        int found=s.find(part);
        while(found != string::npos){
            s.erase(s.begin()+found,s.begin()+found+n);
            found=s.find(part);
        }
        return s;
    }
};