class Solution {
    
public:
int calsum(int num){
    int sum=0;
    while(num>0){
            sum += num % 10 ;
            num/=10;
        }
    return sum;
}

    int addDigits(int num) {
        int sum=calsum( num);
        
        while(sum>=10){
            sum=calsum(sum);
        }
        
        
    return sum;
        
    }
};