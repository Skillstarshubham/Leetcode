class MedianFinder {
public:
    priority_queue<int>small;
    priority_queue<int,vector<int>,greater<int>>large;
    MedianFinder() {
    }
    
    void addNum(int num) {
       small.push(num);
       if(!small.empty()&&!large.empty()&&large.top()<small.top()){
           int val=small.top();
           small.pop();
           large.push(val);
       }
       if(small.size()>large.size()+1){
           int val=small.top();
           small.pop();
           large.push(val);
       }
       else if(small.size()+1<large.size()){
           int val=large.top();
           large.pop();
           small.push(val);
       }
    }
    
    double findMedian() {
        if(small.size()==large.size())
        return (double(small.top())+double(large.top()))/2;
        else if(small.size()==large.size()+1)
        return double(small.top());
        else
        return double(large.top());
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */