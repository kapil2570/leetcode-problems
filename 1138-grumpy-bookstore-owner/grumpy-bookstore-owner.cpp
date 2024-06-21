class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int res = 0;
        for(int i=0 ; i<n ; i++) {
            if(grumpy[i]==0) {
                res += customers[i];
                customers[i] = 0;
            }
        }
        int sum = 0;
        for(int i=0 ; i<minutes ; i++)
            sum += customers[i];
        int low=0, high=minutes-1;
        int maxm=sum;
        while(high<n-1) {
            high++;
            int num = sum-customers[low]+customers[high];
            maxm = max(maxm,num);
            sum = num;
            low++;
        }
        return res + maxm;
    }
};