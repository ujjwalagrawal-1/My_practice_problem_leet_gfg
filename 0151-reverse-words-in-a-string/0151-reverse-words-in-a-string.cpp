class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        // map<int,int>st&st;
        vector<pair<int,int>>index;
        int first = 0;
        int second = 0;
        while(i<s.size()){
            if(s[i] != ' '){
                // int index = i;
                first = i;
                while(s[i] != ' ' && i != s.size()){
                    i++;
                    }
            second = i;
            index.push_back({first,(second-first)});
            }
            else{
                i++;
            }
        }
        // for(auto itr:index){
        //     cout<<itr.first<<"  "<<itr.second<<endl;
        // }
        string ans = "";
        reverse(index.begin(),index.end());
        for(auto itr:index){
            ans += s.substr(itr.first,itr.second);
            ans += " ";
        }
        ans.pop_back( );
        return ans;
    }
};