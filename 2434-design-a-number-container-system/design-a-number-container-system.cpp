class NumberContainers {
public:
    map<int,set<int>>mp;
    map<int,int>m;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(m[index]){
            mp[m[index]].erase(index);
        }
        mp[number].insert(index);
        m[index]=number;
    }
    
    int find(int number) {
        
        if(mp[number].size()){
            return *mp[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */