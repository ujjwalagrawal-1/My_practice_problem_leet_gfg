class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        int carry = 0;
        
        for(int i = digits.size()-1;i>=0;i--){
            digits[i] += carry;
            carry = digits[i]/10;
            digits[i] %= 10;
            if(i == 0 && carry>0){
                vector<int>ans(digits.size()+1);
                ans[i] = carry;
                for(int j = 0;i<ans.size()-1;i++){
                    ans[j+1] = digits[j];
                }
                return ans;
            }
        }
        return digits;
    }
};