class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int ele  = row*col;
        int maxi = INT_MIN;
        vector<int>ans;
        for(int i = 0;i<ele;i++){
            int ansr = mat[i/col][i%col];
            maxi = max(maxi,ansr);
            if(maxi == ansr){
                ans.clear();
                ans.push_back(i/col);
                ans.push_back(i%col);
            }
        }
        return ans;
    }
};