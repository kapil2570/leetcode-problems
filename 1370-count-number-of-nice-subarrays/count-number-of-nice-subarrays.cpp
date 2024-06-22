class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0, high = 0, odds = 0, ans = 0;
        int count = 0;

        while (high < n) {
            if (nums[high] % 2) {
                odds++;
                count = 0;
            }

            while (odds == k) {
                count++;
                if (nums[low] % 2) {
                    odds--;
                }
                low++;
            }

            ans += count;
            high++;
        }

        return ans;
    }
};
