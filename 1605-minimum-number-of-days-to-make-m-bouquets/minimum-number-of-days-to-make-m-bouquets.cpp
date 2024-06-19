class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long prod = (long long)m*(long long)k;
        if(n<prod)
            return -1;

        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());

        while(low<high) {
            int mid = low + (high-low)/2;
            int count=0, num=0;
            for(int i=0 ; i<n ; i++) {
                if(bloomDay[i]<=mid)
                    count++;
                else {
                    if(count>=k)
                        num += count/k;
                    count = 0;
                }
            }
            if(count>=k)
                num += count/k;
            if(num>=m) {
                high = mid;
            }
            else
                low = mid+1;
        }
        return high;
    }
};