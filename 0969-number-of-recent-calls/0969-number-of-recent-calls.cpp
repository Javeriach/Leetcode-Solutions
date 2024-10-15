class RecentCounter {
public:

    queue<int>myQueue;
    RecentCounter() {
        
    }
    
    int ping(int t) {

        if(t <= 3000){
            myQueue.push(t);
            return myQueue.size();
        }else {
              int margin=t-3000;
              while(myQueue.front() < margin &&  !myQueue.empty())
              {
                myQueue.pop();
              }
              myQueue.push(t);
              
        }
        return myQueue.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */