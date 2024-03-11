class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        int n = nums2.size();
        unordered_map<int,int>mpp;

        for(int i=0 ; i<nums1.size() ; i++) {
            int num = nums1[i];
            for(int j=0 ; j<nums2.size() ; j++) {
                if(num==nums2[j]) {
                    mpp[num] = j;
                    break;
                }
            }
        }

        for(int i=n-1 ; i>=0 ; i--) {
            if(st.empty()) {
                st.push(nums2[i]);
                nums2[i] = -1;
                continue;
            }
            if(st.top()>nums2[i]) {
                int num = nums2[i];
                nums2[i] = st.top();
                st.push(num);
            }
            else {
                while(!st.empty() && st.top()<=nums2[i]) {
                    st.pop();
                }
                if(st.empty()) {
                    int num = nums2[i];
                    nums2[i] = -1;
                    st.push(num);
                }
                else {
                    int num = nums2[i];
                    nums2[i] = st.top();
                    st.push(num);
                }
            }
        }

        vector<int>res;
        for(auto num:nums1) {
            res.push_back(nums2[mpp[num]]);
        }
        return res;
    }
};