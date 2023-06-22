class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool>tandf(nums.size()+1,false);
        for(int i=0;i<nums.size();i++){
            tandf[nums[i]] = true;
        }
        int ans;
        for(int i = 0;i<nums.size();i++){
            if(tandf[i] == false){
                ans = i;
            }
        }
        return ans;
    }
};