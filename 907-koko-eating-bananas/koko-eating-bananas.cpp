class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=0;
        for(int i=0 ; i<piles.size() ; i++)
            high = max(high,piles[i]);
        while(low<high) {
            int mid = (low+high)/2;
            int hrs=0;
            for(int i=0 ; i<piles.size() ; i++) {
                hrs += ceil(static_cast<double>(piles[i])/mid);
            }
            if(hrs<=h)
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};