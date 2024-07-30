class Solution {
public:
    int minimumDeletions(string s) {
        int l = s.length();
        vector<int> dp(l + 1, 0);
        int bcount = 0;
        for (int i = 0; i < l; i++) {
            if (s[i] == 'a') {
                dp[i + 1] = min(dp[i] + 1, bcount);
            } else {
                dp[i + 1] = dp[i];
                bcount++;
            }
        }
        return dp[l];
    }
};
