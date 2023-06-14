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
    void insertattail(ListNode* &head,ListNode* &tail,int data){
        if(head == 0 || tail == 0){
            ListNode* newnode = new ListNode(data);
            head = newnode;
            tail = newnode;
            return;
        }
        ListNode* newnode = new ListNode(data);
        tail->next = newnode;
        tail = newnode;
    }
    ListNode* sortList(ListNode* head) {
        map<int,int>hash;
        ListNode* temp = head;
        while(temp != 0){
            hash[temp->val]++;
            temp = temp ->next;
        }
        ListNode* raja = NULL;
        ListNode* tail = NULL;
        for(auto i = hash.begin();i != hash.end();i++){
            for(auto j = i->second ; j != 0;j--){
                insertattail(raja,tail,i->first);
            }
        }
        temp = head;
        while (temp != nullptr) {
            ListNode* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        return raja;
    }
};