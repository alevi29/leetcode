class MinStack {
    int min;
    vector <int> stack;
    vector <int> indices;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (stack.size() == 0) {
            min = val;
            indices.push_back(0);
        }
        else {
            if (val < min) {
                min = val;
                indices.push_back(stack.size());
            }
        }
        stack.push_back(val);
    }
    
    void pop() {
        if (indices.back() == stack.size() - 1) {
            indices.pop_back();
            if (indices.size() != 0) {
                min = stack[indices.back()];
            }
        }
        stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return stack[indices.back()];
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