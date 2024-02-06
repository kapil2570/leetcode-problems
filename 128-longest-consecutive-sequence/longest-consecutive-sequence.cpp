class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(), longest=1;
        if(n==0) return 0;
        unordered_set<int>st;
        for(auto num : nums) {
            st.insert(num);
        }
        for(auto num : st) {
            if(st.find(num-1)==st.end()) {
                int first = num;
                int cnt = 1;
                while(st.find(first+1)!=st.end()) {
                    first++;
                    cnt++;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};