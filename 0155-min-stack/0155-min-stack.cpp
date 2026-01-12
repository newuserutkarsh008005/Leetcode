class MinStack {
public:
stack<int>s;
stack<int>minm;
    MinStack() {
   
    }
    
    void push(int val) {
        s.push(val);
       if(minm.empty()||minm.top()>=val){
        minm.push(val);

       }
    }
    
    void pop() {
        if(s.empty())return;
        if(!s.empty()&&s.top()==minm.top()){
            minm.pop();
        }
        if(!s.empty()){
            s.pop();
        }

    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minm.top();
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