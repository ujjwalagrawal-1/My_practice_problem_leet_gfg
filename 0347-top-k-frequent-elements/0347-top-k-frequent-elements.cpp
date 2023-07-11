class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>hash;
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto itr = hash.begin();itr!=hash.end();itr++){
            v.push_back({itr->second,itr->first});
        }
        // hash.clear();
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<int>ans;
        for(int i = 0;i<k;i++){
            ans.push_back(v[i].second);
        }
        hash.clear();
        return ans;
    }
};