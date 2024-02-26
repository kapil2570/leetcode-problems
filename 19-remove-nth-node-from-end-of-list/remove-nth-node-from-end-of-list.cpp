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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr) return nullptr;
        ListNode *temp=head;
        int len=0;
        while(temp) {
            temp=temp->next;
            len++;
        }
        if(len==n) return head->next;
        int freq=len-n-1;
        temp=head;
        while(freq--) {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};