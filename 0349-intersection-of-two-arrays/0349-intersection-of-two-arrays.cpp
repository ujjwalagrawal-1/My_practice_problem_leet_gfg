class Solution {
public:
void found(stack<int>& s,int& target,int& x){
    if(s.empty())return;
    if(s.top() == target){
        x = 1;
        return;
    }
    int val = s.top();
    s.pop();
    found(s,target,x);
    s.push(val);
}
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        stack<int>st;
        sort(nums1.begin(),nums1.end());
        // sort(nums1.begin(),nums.end());
        for(int i = 0;i<nums1.size();i++){
            st.push(nums1[i]);
        }
        for(int i = 0;i<nums2.size();i++){
            int target = nums2[i];
            int x = 0;
            found(st,target,x);
            if(x){
                ans.push_back(target);
            }
        }
        // for(auto itr:ans){
        //     cout<<itr<<" ";
        // }
        map<int,int>hash;
        for(int i = 0;i<ans.size();i++){
            hash[ans[i]]++;
        }
        ans.clear();
        for(auto itr:hash){
            ans.push_back(itr.first);
        }
        return ans;
    }
};