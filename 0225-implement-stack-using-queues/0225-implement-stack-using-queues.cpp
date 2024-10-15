class MyStack {
public:

        queue<int>myQue1;
        queue<int>myQue2;

    MyStack() {
        
    }
    
    void push(int x) {
        if(myQue1.empty())
        {
            myQue1.push(x);
        }
        else
        {
            while(!myQue1.empty()){
             myQue2.push(myQue1.front());
             myQue1.pop();
            }

            myQue1.push(x);

             while(!myQue2.empty()){
             myQue1.push(myQue2.front());
             myQue2.pop();
            }

        }
    }
    
    int pop() {
        int num=myQue1.front();
         myQue1.pop();
         return num;
    }
    
    int top() {
        return myQue1.front();
    }
    
    bool empty() {
        return (myQue1.empty() && myQue2.empty());
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */