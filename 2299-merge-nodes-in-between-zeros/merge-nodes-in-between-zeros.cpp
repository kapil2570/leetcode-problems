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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *newHead = new ListNode();
        ListNode *temp = head;
        long long sum = 0LL;
        ListNode *curr = newHead;
        while(temp) {
            sum += temp->val;
            if(temp!=head && temp->val==0) {
                ListNode *node = new ListNode(sum);
                curr->next = node;
                curr = node;
                sum = 0;
            }
            temp = temp->next;
        }
        return newHead->next;
    }
};