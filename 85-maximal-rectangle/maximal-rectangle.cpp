class Solution {
public:
    int findArea(vector<int>&histo) {
        int n = histo.size();
        stack<int>st;
        int maxArea = 0;
        for(int i=0 ; i<=n ; i++) {
            while(!st.empty() && (i==n || histo[st.top()] >= histo[i])) {
                int height = histo[st.top()];
                st.pop();
                int width;
                if(st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;
                maxArea = max(maxArea, width*height);
            }
            st.push(i);
        }
        return maxArea;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int>histo(m,0);
        int ans = 0;
        for(int i=0 ; i<n ; i++) {
            for(int j=0 ; j<m ; j++) {
                if(matrix[i][j]=='0')
                    histo[j] = 0;
                else
                    histo[j]++;
            }
            int area = findArea(histo);
            ans = max(ans,area);
        }
        return ans;
    }
};