/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
vector<int> LL_to_vector_conv(ListNode* head){
    vector<int>ll;
    ListNode* temp = head;
    while(temp != NULL){
        ll.push_back(temp->val);
        temp = temp->next;
    }
    return ll;
}
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr = LL_to_vector_conv(head);
        stack<int>s;
        vector<int>ans(arr.size());
        for(int i = arr.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
            ans[i] = s.empty() ? 0:s.top();
            s.push(arr[i]);
        }
        return ans;
    }
};