class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*
        int zero = 0, one = 0,two = 0;

    for(int i= 0;i<nums.size();i++){
        if(nums[i] == 0){
            zero++;
        }
        else if(nums[i] == 1){
         one++;
        }
         else if(nums[i] == 2){
            two++;
        }
    }
    int j = 0;
    for(;j<zero;j++){
        nums[j] = 0;
    }
    for(;j<(zero + one);j++){
        nums[j] = 1;
    }
    for(;j<(zero + one + two);j++){
        nums[j] = 2;
    }
*/
//////////////////////////////// New Programme ///////////////////////
int l =0,m=0,h=nums.size()-1;
while(m<=h){
     if(nums[m] == 0){
         swap(nums[l],nums[m]);
         l++,m++;
     }
     else if(nums[m] == 1){
         m++;
     }
     else{
         swap(nums[m],nums[h]);
         h--;
     }
}   
    }
    
};