class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        int n = nums2.size();
        unordered_map<int,int>mpp;

        for(auto num : nums2) {
            while(!st.empty() && st.top()<num) {
                mpp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        vector<int>res;
        for(auto num:nums1) {
            int elem = mpp.count(num) ? mpp[num] : -1;
            res.push_back(elem);
        }
        return res;
    }
};