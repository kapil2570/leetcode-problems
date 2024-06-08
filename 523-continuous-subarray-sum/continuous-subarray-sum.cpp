class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1) return false;
        unordered_map<int,int>mpp;
        mpp[0] = -1;
        int runningSum = 0;
        for(int i=0 ; i<n ; i++) {
            runningSum += nums[i];
            if(k!=0) {
                runningSum %= k;
            }

            if(mpp.find(runningSum) != mpp.end()) {
                if(i-mpp[runningSum] > 1)
                    return true;
            }
            else {
                mpp[runningSum] = i;
            }
        }
        return false;
    }
};