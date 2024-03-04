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
    ListNode* merge(ListNode *first, ListNode *second) {

        ListNode *dummyHead = new ListNode(0);
        ListNode *curr = dummyHead;
        while(first!=NULL && second!=NULL) {
            if(first->val<=second->val) {
                curr->next = first;
                first = first->next;
            }
            else {
                curr->next = second;
                second = second->next;
            }
            curr = curr->next;
        }

        if(first)
            curr->next=first;
        else if(second)
            curr->next=second;

        return dummyHead->next;
    }

    ListNode* findMid(ListNode *head) {
        ListNode *slow=head, *fast=head->next;
        while(fast!=NULL && fast->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *mid = findMid(head);
        ListNode *temp = mid->next;
        mid->next = NULL;
        ListNode *first = sortList(head);
        ListNode *second = sortList(temp);
        return merge(first,second);
    }
};