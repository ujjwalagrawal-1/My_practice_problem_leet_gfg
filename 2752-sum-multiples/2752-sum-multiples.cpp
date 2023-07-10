class Solution {
public:
bool possible_or_not(int& i){
    if(i%3 ==  0){
        return true;
    }
    if(i%5 == 0){
        return true;
    }
    if(i%7 == 0){
        return true;
    }
    return false;
}
    int sumOfMultiples(int n) {
        int sum = 0;
        for(int i = 0;i<=n;i++){
            if(possible_or_not(i)){
                sum += i;
            }
        }
        return sum;
    }
};