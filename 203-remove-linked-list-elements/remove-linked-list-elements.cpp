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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)
            return head;
        while(head != nullptr && head->val==val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* currHead = head;
        while(currHead != nullptr && currHead->next!=nullptr) {
            if(currHead->next->val==val) {
                ListNode* newNext = currHead->next->next;
                ListNode* dltNode = currHead->next;
                currHead->next = newNext;
                delete dltNode;
            }
            else
                currHead = currHead->next;
        }
        return head;
    }
};