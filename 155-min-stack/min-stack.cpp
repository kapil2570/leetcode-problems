class MinStack {
private:
    stack<pair<int,int>>st;
    int minm = INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        minm = min(val,minm);
        st.push(make_pair(val,minm));
    }
    
    void pop() {
        st.pop();
        if(!st.empty())
            minm = st.top().second;
        else
            minm = INT_MAX;
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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