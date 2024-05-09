class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        priority_queue<int>pq;
        for(auto num : happiness)
            pq.push(num);
        int dec = 0;
        long long ans = 0LL;
        while(pq.top()-dec>0 && k) {
            ans += pq.top() - dec;
            pq.pop();
            dec++;
            k--;
        }
        return ans;
    }
};