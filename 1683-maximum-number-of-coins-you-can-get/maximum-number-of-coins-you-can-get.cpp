class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int res=0, mine;
        int length = piles.size();
        int lim = ((length/3)*2)-2;
        for(int i=0 ; i<=lim ; i+=2)
        {
            mine = i+1;
            res+=piles[mine];
        }
        return res;
    }
};