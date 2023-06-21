class Solution {
public:
    string convert(string s, int numRows) {
        
        int row = 0;
        int i = 0;
        bool direction = 1;//( top --> bottom)
        vector<string> zigzag(numRows);
        while(true){
            if(numRows == 1)return s;
            if(direction){
                while(row<numRows && i<s.size()){
                    zigzag[row++].push_back(s[i++]);
                }
                row = numRows -2+2-2;
            }
            else{
                while(row>=0 && i<s.size()){
                    zigzag[row--].push_back(s[i++]);
                }
                row = 1;
            }
            if(i>=s.size())break;
            direction = !direction;
        }
        string ans = "";
        for(int i = 0;i<zigzag.size();i++){
            ans += zigzag[i];
        }
        return ans;
    }
};