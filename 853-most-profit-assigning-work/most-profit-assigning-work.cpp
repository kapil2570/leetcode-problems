class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = profit.size();
        int m = worker.size();
        vector<pair<int,int>>arr;
        for(int i=0 ; i<n ; i++) {
            arr.push_back({profit[i],difficulty[i]});
        }
        sort(arr.begin(),arr.end(),greater<pair<int,int>>());
        sort(worker.begin(),worker.end(),greater<int>());
        int first = 0, second = 0;
        int ans = 0;
        while(first<n && second<m) {
            if(worker[second] >= arr[first].second) {
                ans += arr[first].first;
                second++;
            }
            else
                first++;
        }
        return ans;
    }
};