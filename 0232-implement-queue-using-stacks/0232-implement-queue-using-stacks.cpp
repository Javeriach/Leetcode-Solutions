class MyQueue {
public:

    stack<int> stack1;
    stack<int> stack2;

    MyQueue() {
    
    }
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        int i=0;
        int target;

        while(i < stack1.size()-1)
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        if(stack1.size() == 1)
       {target=stack1.top();
        stack1.pop();
       }

        while(!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
    return target;

    }
    
    int peek() {

        int i=0;
        int target;
        while(i < stack1.size()-1)
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        if(stack1.size() == 1)
        target=stack1.top();

        while(!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
      return target;
    }
    
    bool empty() {
        return stack1.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */