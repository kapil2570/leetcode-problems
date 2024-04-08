class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int med = nums[n/2];
        long long ans = 0LL;

        if(k>med) {
            for(int i=n/2 ; i<n ; i++)
                ans += max(0,k-nums[i]);
        }
        else {
            for(int i=0 ; i<=n/2 ; i++)
                ans += max(0,nums[i]-k);
        }
        return ans;
    }
};