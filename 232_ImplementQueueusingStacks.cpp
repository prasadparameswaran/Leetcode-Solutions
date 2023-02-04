// Queue using 2 stacks. Elemets are pushed to stack1 and poped from stack2. If stack2 is empty elements in stack 1 are poped and pushed to stack2 one by one tll stack1 is empty  
class MyQueue {
    stack<int> stk1;
    stack<int> stk2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stk1.push(x);
    }
    
    int pop() {
        int x = NULL;
        if(!stk2.empty()){
            x = stk2.top();
            stk2.pop();
        }else if(!stk1.empty()){
            while(!stk1.empty()){
                stk2.push(stk1.top());
                stk1.pop();
            }
            x = stk2.top();
            stk2.pop();
        }
        return x;
    }
    
    int peek() {
        if(!stk2.empty()){
            return stk2.top();
            
        }else if(!stk1.empty()){
            while(!stk1.empty()){
                stk2.push(stk1.top());
                stk1.pop();
            }
            return stk2.top();
        }else return NULL;
    }
    
    bool empty() {
        if(stk1.empty() && stk2.empty()) return true;
        else return false;
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