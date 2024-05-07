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
    ListNode* doubleIt(ListNode* head) {
        stack<ListNode*>st;
        ListNode *temp = head;
        while(temp) {
            st.push(temp);
            temp = temp->next;
        }
        int carry = 0;
        ListNode *ans;
        while(st.size()) {
            int num = st.top()->val;
            st.top()->val = (num * 2)%10 + carry;
            if(num>=5)
                carry = 1;
            else
                carry = 0;
            ans = st.top();
            st.pop();
        }
        if(carry==1) {
            ListNode *dummy = new ListNode(1);
            dummy->next = ans;
            return dummy;
        }
        return ans;   
    }
};