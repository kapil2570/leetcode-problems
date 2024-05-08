class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        map<int,int>mpp;
        for(int i=0 ; i<n ; i++) {
            mpp[score[i]] = i;
        }
        vector<string>ans(n);
        sort(score.begin(),score.end());
        for(int i=0 ; i<n ; i++) {
            if(i<n-3)
                ans[mpp[score[i]]] = to_string(n-i);
            else if(i==n-3)
                ans[mpp[score[i]]] = "Bronze Medal";
            else if(i==n-2)
                ans[mpp[score[i]]] = "Silver Medal";
            else
                ans[mpp[score[i]]] = "Gold Medal";
        }
        return ans;
    }
};