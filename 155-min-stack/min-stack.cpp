class MinStack {
public:
stack<int>st;
stack<int>minst;
int min=INT_MAX;
    MinStack() {
    }
    void push(int value) {
        if(value<=min){
            min=value;
            }
            minst.push(min);
        st.push(value);
    }
    
    void pop() {
       minst.pop();
       if(!minst.empty()){
       min=minst.top();}
       else {
    min = INT_MAX;
}
         st.pop();

    }
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */