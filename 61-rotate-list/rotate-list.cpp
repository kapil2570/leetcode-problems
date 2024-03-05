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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL || head->next==NULL)
            return head;
        ListNode *temp = head;
        int len=0;
        while(temp->next) {
            len++;
            temp=temp->next;
        }
        len+=1;
        k = k%len;
        if(k==0)
            return head;
        
        ListNode *slow=head, *fast=head;
        int cnt=0;
        while(fast) {
            fast=fast->next;
            cnt++;
            if(cnt>=k+2)
                slow=slow->next;
        }
        ListNode *newHead = slow->next;
        slow->next=NULL;
        temp->next=head;
        return newHead;
    }
};