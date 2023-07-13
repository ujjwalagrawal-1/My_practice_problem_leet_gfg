class Solution {
public:
    string truncateSentence(string s, int k) {
        // unorderd_map<int,string>hash;
        int x = 0;
        vector<string>vec;
        int i = 0;
        while(i<s.size() && x<k){
            int first = 0;
            int second = 0;
            if(s[i] != ' '){
                first = i;
                while(s[i] != ' ' && i<s.size()){
                    i++;
                }
                second = i;
                string sub = s.substr(first,second-first);
                vec.push_back(sub);
                x++;
            }
            i++;
        }
        string ans = "";
        
        for(auto itr:vec){
            ans += itr;
            ans += ' ';
        }
        ans.pop_back();
        return ans;
    }
};
