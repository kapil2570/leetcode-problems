class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxsum=0, len=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0 ; i<len ; i++)
        {
            maxsum = max(maxsum, nums[i]+nums[len-i-1]);
        }
        return maxsum;
    }
};