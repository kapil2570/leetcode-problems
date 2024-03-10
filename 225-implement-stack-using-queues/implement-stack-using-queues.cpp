class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int n = q.size()-1;
        while(n--) {
            int popped = q.front();
            q.pop();
            q.push(popped);
        }
    }
    
    int pop() {
        int popped = q.front();
        q.pop();
        return popped;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.empty())
            return true;
        return false;
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