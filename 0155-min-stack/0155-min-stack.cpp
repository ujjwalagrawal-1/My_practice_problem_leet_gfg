class MinStack {
public:
vector<pair<int,int>>st;
    MinStack() {
        

    }
    
    void push(int val) {
        if(st.empty()){
        pair<int,int>Make_Pair;
        Make_Pair.first = val;
        Make_Pair.second = val;
        st.push_back(Make_Pair);
        }
        else{
        pair<int,int>Make_Pair;
        Make_Pair.first = val;
        Make_Pair.second = min(st.back().second,val);
        st.push_back(Make_Pair);
        }
    }
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back().first;
    }
    
    int getMin() {
        return st.back().second;
    }
//     The given code represents a class called `MinStack` that implements a stack data structure. This stack has an additional feature of efficiently retrieving the minimum value in constant time (O(1)).

// Here's a breakdown of the code:

// - The class `MinStack` contains a private member variable `st`, which is a vector of pairs of integers. Each pair consists of two values: the current element and the minimum element at that point in the stack.

// - The constructor `MinStack()` initializes an empty stack.

// - The `push(int val)` function is used to insert an element into the stack. It takes an integer value `val` as a parameter. 

//   - If the stack is empty, a pair is created with `val` assigned to both the first and second values. This means that the first element being pushed is also the minimum element. The pair is then added to the stack using `push_back()`.
  
//   - If the stack is not empty, a pair is created with `val` assigned to the first value and the minimum of the current minimum value and `val` assigned to the second value. This ensures that the second value of the pair always represents the minimum element in the stack. The pair is then added to the stack.

// - The `pop()` function removes the top element from the stack using `pop_back()`.

// - The `top()` function returns the value of the element at the top of the stack, which is the first value of the pair at the back of the vector.

// - The `getMin()` function returns the minimum element in the stack, which is the second value of the pair at the back of the vector.

// By maintaining the minimum value at each step in the stack, the `getMin()` operation can be performed efficiently in constant time without the need to traverse the entire stack.

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */