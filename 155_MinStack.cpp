// Soultion uses an extra stack for O(1) operations. Corresponding to each element pushed into the main stack, the minimum element in the stack is pushed into currentMin 
class MinStack {
    stack<int> stk;
    stack<int> currentMin;
public:
    MinStack() {}
    
    void push(int val) {
        stk.push(val);
        if(currentMin.empty()) currentMin.push(val);
        else if(val < currentMin.top()) currentMin.push(val);
        else currentMin.push(currentMin.top());
    }
    
    void pop() {
        stk.pop();
        currentMin.pop();
    }
    
    int top() {
        return stk.top();   
    }
    
    int getMin() {
        return currentMin.top();
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