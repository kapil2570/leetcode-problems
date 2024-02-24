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
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        vector<int>arr;
        while(head) {
            arr.push_back(head->val);
            head = head->next;
        }
        ListNode *newHead = new ListNode();
        ListNode *temp = newHead;
        for(int i=arr.size()-1 ; i>=0 ; i--) {
            temp->val = arr[i];
            if(i!=0)
                temp->next = new ListNode();
            temp = temp->next;
        }
        return newHead;
    }
};