class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i=0 ; i<n ; i++) {
            int prod = 1;
            int j = i;
            while(j<n && prod*nums[j]<k) {
                count++;
                prod *= nums[j];
                j++;
            }
        }
        return count;
    }
};