class Solution {
public:
    struct Cmp {
        bool operator()(const pair<int,int>&a, const pair<int,int>&b) {
            return a.first < b.first;
        }
    };

    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, Cmp>pq;
        for(int i=0 ; i<n ; i++)
            pq.push({score[i],i});
        vector<string>ans(n);
        ans[pq.top().second] = "Gold Medal";
        pq.pop();
        if(!pq.empty()) {
            ans[pq.top().second] = "Silver Medal";
            pq.pop();
        }
        if(!pq.empty()) {
            ans[pq.top().second] = "Bronze Medal";
            pq.pop();
        }
        int cnt = 4;
        while(!pq.empty()) {
            ans[pq.top().second] = to_string(cnt);
            cnt++;
            pq.pop();
        }
        return ans;
    }
};