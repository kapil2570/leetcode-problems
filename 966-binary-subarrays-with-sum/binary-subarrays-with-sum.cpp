class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mpp;
        int sum = 0, cnt = 0;
        for(auto num : nums) {
            sum += num;
            if(sum==goal)
                cnt++;
            if(mpp.find(sum-goal)!=mpp.end())
                cnt += mpp[sum-goal];
            mpp[sum]++;
        }
        return cnt;
    }
};