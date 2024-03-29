class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long maxm = *max_element(nums.begin(),nums.end());
        int cnt = 0;

        int low=0, high=0;
        long long res = 0;
        while(high<n) {
            if(nums[high]==maxm)
                cnt++;
            while(cnt==k) {
                if(nums[low]==maxm)
                    cnt--;
                low++;
                res += n-high;
            }
            high++;
        }
        return res;
    }
};