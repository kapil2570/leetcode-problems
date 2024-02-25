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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast && fast->next) {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev=slow, *temp=slow->next, *front=nullptr;
        prev->next=nullptr;
        while(temp) {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        slow=prev;
        while(slow) {
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};