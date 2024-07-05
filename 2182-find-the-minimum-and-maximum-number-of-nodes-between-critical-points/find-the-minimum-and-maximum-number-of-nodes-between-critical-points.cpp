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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>store;
        ListNode *temp = head->next;
        int curr = 2;
        ListNode *prev = head;
        while(temp->next) {
            if(temp->val > prev->val && temp->val > temp->next->val)
                store.push_back(curr);
            else if(temp->val < prev->val && temp->val < temp->next->val)
                store.push_back(curr);
            temp = temp->next;
            prev = prev->next;
            curr++;
        }
        // return store;
        if(store.size() < 2) {
            return {-1,-1};
        }
        if(store.size()==2) {
            int num = store[1]-store[0];
            return {num,num};
        }
        int a = store[store.size()-1] - store[0];
        int b = INT_MAX;
        for(int i=0 ; i<store.size()-1 ; i++) {
            b = min(b,abs(store[i]-store[i+1]));
        }
        return {b,a};
    }
};