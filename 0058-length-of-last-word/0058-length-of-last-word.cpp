class Solution {
public:
    int lengthOfLastWord(string s) {
        // reverse(s.begin(),s.end());
        // for(int i = s.size()-1;s[i] == ' ';i--){
        //     s.pop_back();
        // }
        // int size =0;
        //  for(int i = s.size()-1;s[i]!=' ' && i>=0;i--){
        //     size++;
        // }
        // return size;
        int i = s.size()-1;
        while(i>= 0 && s[i] == ' '){
            i--;
        }
        int size = 0;
        while(i>=0 && s[i] != ' '){
            i--;
            size++;
        }
        return size; 
    }
};