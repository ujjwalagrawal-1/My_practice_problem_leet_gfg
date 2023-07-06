class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j = 0;
        // int count = 0 ;
        int ans = 0;
        if(nums.size() == 1 || nums.size() == 2)return nums[0];
        for(int i = 0;i<nums.size() - 1;){
            j = i+1;
            if(nums[i] == nums[j]){ 
                i++;
                continue;
            }
            if(nums[i] != nums[j]){
                if(nums[j] != nums[j+1] && j+1<nums.size()){
                    ans = nums[j];
                    break;
                }
                else if(j+1 >= nums.size()){
                    ans = nums[j];
                    break;
                }
                else if(nums[j] == nums[j+1] && j+1<nums.size() && i == 0){
                    ans = nums[i];
                    break;
                }
                else{
                    i++;
                }
            }
        }
        return ans;
    }
};