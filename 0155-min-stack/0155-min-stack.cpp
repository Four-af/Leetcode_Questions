class MinStack {
public:
    vector<int> v;
    int size ;
    MinStack() {
        size = 0;
        v.clear();
    }
    
    void push(int val) {
        v.push_back(val);
        size++;
    }
    
    void pop() {
        v.resize(size-1);
        size--;
    }
    
    int top() {
        return v[size-1];
    }
    
    int getMin() {
        return *min_element(v.begin(),v.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */