class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<long long>prevMin(n), nextMin(n);
        for(int i=0 ; i<n ; i++) {
            prevMin[i] = i;
            nextMin[i] = n-i-1;
        }
        for(int i=0 ; i<n ; i++) {
            while(!st.empty() && nums[i]<=nums[st.top()]) {
                nextMin[st.top()] = i-st.top()-1;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        for(int i=n-1 ; i>=0 ; i--) {
            while(!st.empty() && nums[i]<nums[st.top()]) {
                prevMin[st.top()] = st.top()-i-1;
                st.pop();
            }
            st.push(i);
        }

        long long minSum = 0;
        for(int i=0 ; i<n ; i++) {
            minSum += (long long)(((prevMin[i]+1)*(nextMin[i]+1)-1)*nums[i]);
        }
        while(!st.empty())
            st.pop();

        
        vector<long long>prevMax(n), nextMax(n);
        for(int i=0 ; i<n ; i++) {
            prevMax[i] = i;
            nextMax[i] = n-i-1;
        }
        for(int i=0 ; i<n ; i++) {
            while(!st.empty() && nums[i]>=nums[st.top()]) {
                nextMax[st.top()] = i-st.top()-1;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        for(int i=n-1 ; i>=0 ; i--) {
            while(!st.empty() && nums[i]>nums[st.top()]) {
                prevMax[st.top()] = st.top()-i-1;
                st.pop();
            }
            st.push(i);
        }

        long long maxSum = 0;
        for(int i=0 ; i<n ; i++) {
            maxSum += (long long)(((prevMax[i]+1)*(nextMax[i]+1)-1)*nums[i]);
        }
        return maxSum - minSum;
    }
};