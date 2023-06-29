class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hash;
        vector<vector<string>>ans;
        // vector<string>copy = strs;
        for(auto stri:strs){
            string t = stri;
            sort(t.begin(),t.end());
            hash[t].push_back(stri); 
        }
        for(auto itr:hash){
            ans.push_back(itr.second);
        }
        return ans;
    }
};