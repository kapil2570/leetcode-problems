class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxm=*max_element(piles.begin(),piles.end());
        int low=1, high=maxm, mid, ans=INT_MAX;
        long long num;
        while(low<=high)
        {
            mid=(low+high)/2;
            num=0;
            for(int i=0 ; i<n ; i++)
            {
                num+=piles[i]/mid;
                if(piles[i]%mid)
                    num+=1;
            }
            if(num<=h)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};