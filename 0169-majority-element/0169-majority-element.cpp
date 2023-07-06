class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>hash;
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto itr = hash.begin();itr!=hash.end();itr++){
            v.push_back({itr->second,itr->first});
        }
        sort(v.begin(),v.end());

        return v[hash.size() - 1].second;
    }
};