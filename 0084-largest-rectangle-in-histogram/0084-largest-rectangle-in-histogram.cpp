class Solution {
public:
    vector<int> prevlowest(vector<int>& arr){
        stack<int>s;
        s.push(-1);
        vector<int>ans(arr.size());
        for(int i = 0;i<arr.size();i++){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> Nextlowest(vector<int>& arr){
        stack<int>s;
        s.push(-1);
        vector<int>ans(arr.size());
        for(int i = arr.size()-1;i>=0;i--){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        // for(int i = 0;i<arr.size();i++){
        //     if(ans[i] == -1){
        //         ans[i] = arr.size();
        //     }
        // }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>prev = prevlowest(heights);
        vector<int>next = Nextlowest(heights);
        int maxi = INT_MIN;
        int size = heights.size();
        for(int i = 0;i<heights.size();i++){
            if(next[i] == -1){
      next[i] = size;
    }
            int len = heights[i];
            int bre = next[i]-prev[i]-1;
            int val = len*bre;
            maxi = max(maxi,val);
        }
        return maxi;
    }
};