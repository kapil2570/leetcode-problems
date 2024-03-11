class MinStack {
private:
    stack<long long>st;
    long long minm;
public:
    MinStack() {
        minm = INT_MAX;
    }
    
    void push(long long val) {
        if(st.empty()) {
            st.push(val);
            minm = val;
        }
        else {
            if(val<minm) {
                st.push(2*val*1LL-minm);
                minm=val;
            }
            else {
                st.push(val);
            }
        }
    }
    
    void pop() {
        if(st.empty())
            return;
        long long el = st.top();
        st.pop();
        if(el<minm) {
            minm = 2*minm*1LL - el;
        }
    }
    
    int top() {
        if(st.empty())
            return -1;
        long long el = st.top();
        if(el<minm)
            return minm;
        return el;
    }
    
    int getMin() {
        return minm;
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