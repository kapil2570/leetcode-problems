/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==headB) return headA;
        int lenA=0, lenB=0;
        ListNode *temp=headA;
        while(temp) {
            temp=temp->next;
            lenA++;
        }
        temp=headB;
        while(temp) {
            temp=temp->next;
            lenB++;
        }
        if(lenA>=lenB)
            temp=headA, headA=headB;
        else
            temp=headB;
        int diff=abs(lenA-lenB);
        while(diff--) {
            temp=temp->next;
        }
        while(temp!=NULL && headA!=NULL) {
            if(temp==headA) return temp;
            temp=temp->next;
            headA=headA->next;
        }
        return NULL;
    }
};