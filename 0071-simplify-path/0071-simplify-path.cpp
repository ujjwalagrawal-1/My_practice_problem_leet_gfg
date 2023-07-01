class Solution {
public:
    void reverse(stack<string>& s,string& ans){
        if(s.empty()){
            return;
        }
        string temp = s.top();
        s.pop();
        reverse(s,ans);
        ans += temp;
    }
    string simplifyPath(string path) {
        int i = 0;
        stack<string>s;
        while(i<path.size()){
            int start = i;
            int end = i+1;
            while(end<path.size() && path[end]!='/'){
                end++;
            }
            i = end;
            string str = path.substr(start,end-start);
            if(str == "/." || str == "/"){
                continue;
            }
            else if(str != "/.."){
                s.push(str);
            }
            else if(!s.empty()){
                    s.pop();
            }
        }
        string ans = s.empty() ? "/":"";
        reverse(s,ans);
        return ans;
    }
};