/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
        {
            ListNode *a = headA;
            ListNode *b = headB;
            while (a->next && b->next)
            {
                if (a == b)
                {
                    return a;
                }
                a = a->next;
                b = b->next;
            }
            if (a->next == 0 && b->next == 0 && a != b) return 0;
            if (a->next == 0)
            {
               	//b waali linked list badi hai
               	//kitni badi hai wo nahi pata to nicha nikal leta hai
                int blength = 0;
                while (b->next)
                {
                    blength++;
                    b = b->next;
                }
                while (blength--)
                {
                    headB = headB->next;
                }
            }
            else
            {
               	//a waali linked list badi hai
               	//kitni badi hai wo nahi pata to nicha nikal leta hai
                int alength = 0;
                while (a->next)
                {
                    alength++;
                    a = a->next;
                }
                while (alength--)
                {
                    headA = headA->next;
                }
            }

           	while(headA != headB){
           	    headA = headA->next;
           	    headB = headB->next;
               }
               return headA;
        }
};