class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro = 0;
        int min = INT_MAX;
        for(int i=0 ; i<n ; i++)
        {
            if(min>prices[i])
                min = prices[i];
            maxPro = max(maxPro,prices[i]-min);
        }
        return maxPro;
    }
};