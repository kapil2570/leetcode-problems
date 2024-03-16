class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        long long maxArea=0;
        stack<int>st;
        vector<int>preCount(n), nextCount(n);
        for(int i=0 ; i<n ; i++) {
            preCount[i] = i;
            nextCount[i] = n-i-1;
        }
        for(int i=0 ; i<n ; i++) {
            while(!st.empty() && heights[i]<heights[st.top()]) {
                nextCount[st.top()] = i-st.top()-1;
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty())
            st.pop();
        
        for(int i=n-1 ; i>=0 ; i--) {
            while(!st.empty() && heights[i]<heights[st.top()]) {
                preCount[st.top()] = st.top()-i-1;
                st.pop();
            }
            st.push(i);
        }

        for(int i=0 ; i<n ; i++) {
            long long area = (preCount[i]+nextCount[i]+1)*heights[i];
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
};