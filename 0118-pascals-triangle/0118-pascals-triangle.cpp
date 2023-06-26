class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle;
        for(int i = 0;i<numRows;i++){
            vector<int>prep(i+1,1);
            for(int j = 0;j<=i;j++){
                if(j == i){
                    prep[j] = 1;
                }
                else if(j == 0){
                    prep[j] = 1;
                }
                else{
                    prep[j] = triangle[i-1][j-1]+triangle[i-1][j];
                }
            }
            triangle.push_back(prep);
        }
        return triangle;
    }
};