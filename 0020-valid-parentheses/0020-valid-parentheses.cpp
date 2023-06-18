class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i = 0;i<s.size();i++){
            // agar ladka present hai to in kardo warna phela ladki nahi ja sakti yarr
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    // we check ki top wale ki bandi hai ki nahi hai agar hai to dhike dono ko maar do agar nahi hai to return false kar 
                    if(st.top() == '(' && s[i] == ')'){
                        st.pop();
                    } 
                    else if(st.top()== '{' && s[i] == '}'){
                        st.pop();
                    } 
                    else if(st.top() == '[' && s[i] == ']'){
                        st.pop();
                    } 
                    else{
                        return false;
                    }
                    
                }

                // below else is used because of the test case like " --> "]" or "}""
                else{
                        return false;
                    }
            }
        }
        return st.empty();
    }
};