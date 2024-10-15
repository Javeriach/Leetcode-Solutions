class RecentCounter {
public:

    queue<int>myQueue;
    RecentCounter() {
        
    }
    
    int ping(int t) {
    
    // Login:
    //1---if given time t is less than 3000 then simply add and return the queue size because they always come in i
    //in increasing order --agr given time he 3000 sy kum hy meand ky jitny be prhly number hn wo sub 3000 sy kum he hn gan

    //2---agr given time he  3000 sy bary hy tu means ky tu hamy bus wahe add karny hn jo ky margin ky ander ander hn gan
    //margin = giventime(t) - 3000; is liya margin sy kum jitny be numbers hn gan hm wo sary queue sy nikal dan gan.
    //remeber they are already in sorted order....is liya hum apny margin sy pehly jitny number h un sub ko nikal dan gan

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