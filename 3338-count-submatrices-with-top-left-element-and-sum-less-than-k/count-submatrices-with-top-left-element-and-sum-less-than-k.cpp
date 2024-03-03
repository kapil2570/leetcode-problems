class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        
        vector<vector<int>>dp(n, vector<int>(m,0));
        for(int i=0 ; i<n ; i++) {
            for(int j=0 ; j<m ; j++) {
                if(i==0 && j==0) {
                    dp[i][j] = grid[i][j];
                }
                else if(i==0) {
                    dp[i][j] = dp[i][j-1] + grid[i][j];
                }
                else if(j==0) {
                    dp[i][j] = dp[i-1][j] + grid[i][j];
                }
                else {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + grid[i][j];
                }
                if(dp[i][j]<=k)
                    cnt++;
            }
        }
        return cnt;
    }
};