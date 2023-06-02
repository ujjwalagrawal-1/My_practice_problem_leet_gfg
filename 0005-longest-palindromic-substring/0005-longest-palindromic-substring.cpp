class Solution {
public:
bool ispalindrom(string& str,int k,int l){
    while(k<l){
        if(str[k] != str[l]){
            return false;
        }
        k++;l--;
    }
    return true;
}
    string longestPalindrome(string s) {
        string ans = "";
        
        for(int  i = 0;i<s.size();i++){
            for(int j = i;j<s.size();j++){
                if(ispalindrom(s,i,j)){
                    string t = s.substr(i,j-i+1);
                    ans = t.size()>ans.size() ? t : ans; 
                    }
                }
            }
            return ans;
        }
};