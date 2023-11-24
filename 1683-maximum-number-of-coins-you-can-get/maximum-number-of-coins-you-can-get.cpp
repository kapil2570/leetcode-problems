class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int res=0, mine;
        int length = piles.size();
        int lim = ((length/3)*2)-1;
        for(int i=1 ; i<=lim ; i+=2)
        {
            res+=piles[i];
        }
        return res;
    }
};