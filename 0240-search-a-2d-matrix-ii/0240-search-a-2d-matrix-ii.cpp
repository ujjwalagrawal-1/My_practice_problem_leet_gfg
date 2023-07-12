class Solution {
public:


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size()*matrix[0].size();
        int col = matrix[0].size()-1;
        for(int i = 0;i<matrix.size();i++){
            int left = 0;
            int right = matrix[0].size()-1;
            int mid = left + (right - left)/2;
            while(left<=right){
                if(matrix[i][mid] == target){
                    return true;
                }
                else if(matrix[i][mid]>target){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
                mid = left + (right - left)/2;
            }
        }
        return false;
    }
};