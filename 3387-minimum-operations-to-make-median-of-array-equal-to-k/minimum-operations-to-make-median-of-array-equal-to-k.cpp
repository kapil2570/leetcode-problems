class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mid = n/2;
        long long cnt = 0;
        if(nums[mid]>k) {
            for(int i=mid ; i>=0 ; i--) {
                if(nums[i]>k)
                    cnt+=nums[i]-k;
            }
        }
        else if(nums[mid]<k) {
            for(int i=mid ; i<n ; i++) {
                if(nums[i]<k)
                    cnt+=k-nums[i];
            }
        }
        return cnt;
    }
};