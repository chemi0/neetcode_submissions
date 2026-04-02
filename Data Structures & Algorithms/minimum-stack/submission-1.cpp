class MinStack {
    private:
    stack<int> stck;
    stack<int> stackMin;
public:
    MinStack() {}
    
    void push(int val) {
        stck.push(val);
        val = min(val, stackMin.empty() ? val : stackMin.top());
        stackMin.push(val);
    }
    
    void pop() {
        stck.pop();
        stackMin.pop();
    }
    
    int top() {
        return stck.top();
    }
    
    int getMin() {
        return stackMin.top();
    }
};
