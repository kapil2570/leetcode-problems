class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minm=INT_MAX, sminm=INT_MAX;
        for(int i=0 ; i<prices.size() ; i++)
        {
            if(prices[i]<minm)
            {
                sminm = minm;
                minm = prices[i];
            }
            else if(prices[i]<sminm)
                sminm = prices[i];
        }
        if(minm+sminm <= money)
            return money-(minm+sminm);
        return money;
    }
};