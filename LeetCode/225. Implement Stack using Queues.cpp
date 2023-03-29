class MyStack {
public:
    vector<int> vec;
    MyStack() {

    }

    void push(int x) {
        vec.insert(vec.begin(),x);
    }

    int pop() {
        int top = vec.front();
        for(int i=0;i<vec.size()-1;i++){
            vec[i] = vec[i+1];
        }
        vec.pop_back();
        return top;
    }

    int top() {
        return vec.front();
    }

    bool empty() {
        return vec.empty();
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
