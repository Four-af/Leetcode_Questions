class MyQueue {
public:
    
    stack<int> s1; //queue
    stack<int> s2; //supporter
    
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty()) return NULL;
        while(!s1.empty()){
            int ele = s1.top();
            s1.pop();
            s2.push(ele);
        }
        int ele = s2.top();
        s2.pop();
        while(!s2.empty()){
            int ele = s2.top();
            s2.pop();
            s1.push(ele);
        }
        return ele;
    }
    
    int peek() {
        while(!s1.empty()){
            int ele = s1.top();
            s1.pop();
            s2.push(ele);
        }
        int ele = s2.top();
        // s2.pop();
        while(!s2.empty()){
            int ele = s2.top();
            s2.pop();
            s1.push(ele);
        }
        return ele;
    }
    
    bool empty() {
        if(s1.empty()) return true;
        return false;
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