class MyQueue {
    stack <int> s1, s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        s2.push(x);
    }
    
    int pop() {
        int move = s1.size() - 1;
        for (int i = 0; i < move; ++i) {
            s2.push(s1.top());
            s1.pop();
        }
        int ret = s1.top();
        s1.pop();
        for (int i = 0; i < move; ++i) {
            s1.push(s2.top());
            s2.pop();
        }
        return ret;
    }
    
    int peek() {
        int move = s1.size() - 1;
        for (int i = 0; i < move; ++i) {
            s2.push(s1.top());
            s1.pop();
        }
        int ret = s1.top();
        for (int i = 0; i < move; ++i) {
            s1.push(s2.top());
            s2.pop();
        }
        return ret;        
    }
    
    bool empty() {
        return s1.empty();
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