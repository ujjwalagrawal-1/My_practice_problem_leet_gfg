/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;  
    }
};
*/

class Solution {
public:
    void insertattail(Node* &head,Node* &tail,int data){
        Node* newnode = new Node(data);
        if(head == NULL || tail == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
        return;
    }
    Node* copyRandomList(Node* head) {
        Node* copyllhead = NULL;
        Node* copylltail = NULL;
        Node* temp = head;
        while(temp != NULL){
            insertattail(copyllhead,copylltail,temp->val);
            temp = temp->next;
        }
        unordered_map<Node* , Node*>mp; 
        temp = head;
        Node* raja = copyllhead;
        while(temp!= NULL){
            mp[temp] = raja;
            temp = temp->next;
            raja = raja->next;
        }
        temp = head;
        raja = copyllhead;
        while(temp !=NULL){
            raja->random = mp[temp->random];
            temp = temp->next;
            raja = raja->next; 
        }
        return copyllhead;

    }
};