class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long ans = 0;
        long long x = 1;
        while(x<=num/2){
            if(num%x == 0){
                ans += x;
            }
            x++;
        }
        return num == ans ? true:false;
    }
};