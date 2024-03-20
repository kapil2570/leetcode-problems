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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *dummyNode = new ListNode(-1);
        dummyNode->next = list1;
        int cnt = -1;
        ListNode *temp = dummyNode;
        while(cnt!=a-1) {
            temp = temp->next;
            cnt++;
        }
        ListNode *temp1 = temp->next;
        cnt++;
        temp->next = list2;
        while(cnt!=b) {
            temp1 = temp1->next;
            cnt++;
        }
        ListNode *temp2 = list2;
        while(temp2->next) {
            temp2 = temp2->next;
        }
        temp2->next = temp1->next;
        temp1->next = NULL;
        return dummyNode->next;
    }
};