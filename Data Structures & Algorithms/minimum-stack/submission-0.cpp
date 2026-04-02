class MinStack {
public:
    stack<int> stck;
    MinStack() {
        
    }
    
    void push(int val) {
        stck.push(val);
    }
    
    void pop() {
        stck.pop();
    }
    
    int top() {
        return stck.top();
    }
    
    int getMin() {
        if (stck.empty()) return -1;

        stack<int> temp;
        int minVal = stck.top();

        while (!stck.empty()) {
            int current = stck.top();
            if (current < minVal) {
                minVal = current;
            }
            temp.push(current);
            stck.pop();
        }

        while (!temp.empty()) {
            stck.push(temp.top());
            temp.pop();
        }

        return minVal;

    }
};
