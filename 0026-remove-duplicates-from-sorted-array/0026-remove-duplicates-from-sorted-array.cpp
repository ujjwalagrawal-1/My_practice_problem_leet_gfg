class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>hash;
        vector<int>nums2;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            hash[nums[i]]++;
        }
        for(auto j:hash){
            nums2.push_back(j.first);
        }
        for(int i = 1;i<n-hash.size();i++){
            nums.push_back(' ');
        }
        nums = nums2;
        return hash.size();
    }
};