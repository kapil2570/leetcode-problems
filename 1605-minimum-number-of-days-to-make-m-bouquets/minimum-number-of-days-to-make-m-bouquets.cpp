class Solution {
public:
    int numofbouq(vector<int>& bloomDay, int mid, int k)
    {
        int cnt=0, bouq=0;
        for(int i=0 ; i<bloomDay.size() ; i++)
        {
            if(mid>=bloomDay[i])
                cnt++;
            else
            {
                bouq+=cnt/k;
                cnt=0;
            }
        }
        bouq+=cnt/k;
        return bouq;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(n/m<k)
            return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;
            int bouq=numofbouq(bloomDay,mid,k);
            if(bouq>=m)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};