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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        ListNode *temp=head, *shift=head->next->next, *mid=head->next;
        while(shift) {
            mid->next=shift->next;
            shift->next=temp->next;
            temp->next=shift;
            temp=shift;
            if(mid->next==NULL) break;
            shift=mid->next->next;
            mid=mid->next;
        }
        return head;
    }
};