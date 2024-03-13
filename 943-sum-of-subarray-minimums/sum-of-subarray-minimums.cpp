class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<long long>prev_elem(n), next_elem(n);
        for(long long i=0 ; i<n ; i++) {
            prev_elem[i] = i;
            next_elem[i] = n-i-1;
        }
        stack<int>st;
        for(int i=0 ; i<n ; i++) {
            while(!st.empty() && arr[i]<=arr[st.top()]) {
                next_elem[st.top()] = i-st.top()-1;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) {
            st.pop();
        }
        for(int i=n-1 ; i>=0 ; i--) {
            while(!st.empty() && arr[i]<arr[st.top()]) {
                prev_elem[st.top()] = st.top()-i-1;
                st.pop();
            }
            st.push(i);
        }
        long long ans = 0;
        int mod = 1e9+7;
        for(int i=0 ; i<n ; i++) {
            ans = (ans + (arr[i]*(prev_elem[i]+1)*(next_elem[i]+1))%mod)%mod;
        }
        return ans;
    }
};