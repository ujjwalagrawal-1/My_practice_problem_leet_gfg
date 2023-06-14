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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        if(left == 0){
            return right;
        }
        if(right == 0){
            return left;
        }

        ListNode* newnode = new ListNode(-1);
        ListNode* mpt = newnode;
        while(left && right){
            if(left->val<=right->val){
                mpt->next = left;
                mpt = left;
                left = left->next;
            }
            else{
                mpt->next = right;
                mpt = right;
                right = right-> next;
            }
        }
        if(left){
            mpt->next = left;
        }
        if(right){
            mpt->next = right;
        }
        ListNode* raja = newnode->next;
        delete newnode;
        return raja;
    }
};