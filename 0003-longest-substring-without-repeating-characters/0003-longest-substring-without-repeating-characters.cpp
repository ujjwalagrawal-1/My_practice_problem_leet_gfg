// class Solution {
// public:
// bool check_yes_or_no(string st){
//     map<char,int>hash;
//     for(int i = 0;i<st.size();i++){
//         hash[st[i]]++;
//     }
//     for(auto itr = hash.begin();itr != hash.end();itr++){
//         if(itr->second>1){
//             return false;
//         }
//     }
//     return true;
// }
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     return b;
// }
//     int lengthOfLongestSubstring(string s) {
//         vector<string>v;
//         for(int i = 0;i<s.size();i++){
//             for(int j = i;j<s.size();j++){
//                 string str1 = s.substr(i,(j-i)+1);
//                 v.push_back(str1);
//             }
//         }
//         if(v.size() == 0)return 0;
//         int maxi = INT_MIN;
//         // vector<string>ans;
//         for(int i = 0;i<v.size();i++){
//             if(check_yes_or_no(v[i])){
//                 // ans.push_back(v[i]);
//                 maxi = max(maxi,v[i].size());
//             }
//         }
//         return maxi;
//     }
// };
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int start = 0;
        int e = 0;
        int maxi = 0;
        while(e<s.size()){
        // auto it = st.find(s[e]);
        if(st.count(s[e]) == 0){
            st.insert(s[e]);
            int t = e-start + 1;
            maxi = max(maxi,t);
            e++;
        }
        else{
            
            st.erase(s[start]);
            start++;  
        }
        }
        return maxi;
    }
};