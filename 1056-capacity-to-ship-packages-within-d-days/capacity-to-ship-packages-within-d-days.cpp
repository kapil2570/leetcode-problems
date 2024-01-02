class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int high=0;
        for(int i=0 ; i<n ; i++)
            high+=weights[i];
        int low=*max_element(weights.begin(),weights.end());
        while(low<high)
        {
            int mid=(low+high)/2;
            int cnt=0, sum=0;
            for(int i=0 ; i<n-1 ; i++)
            {
                sum+=weights[i];
                if(sum+weights[i+1]>mid)
                {
                    cnt++;
                    sum=0;
                }
            }
            cnt+=1;
            if(cnt<=days)
                high=mid;
            else
                low=mid+1;
        }
        return high;
    }
};