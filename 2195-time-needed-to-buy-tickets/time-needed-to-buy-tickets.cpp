class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>>q;
        int ans = 0;
        int n = tickets.size();
        for(int i=0 ; i<n ; i++) {
            q.push({i,tickets[i]});
        }
        while(!q.empty()) {
            pair<int,int>pr = q.front();
            q.pop();
            pr.second -= 1;
            ans++;
            if(pr.first==k && pr.second==0)
                break;
            if(pr.second>0)
                q.push(pr);
        }
        return ans;
    }
};