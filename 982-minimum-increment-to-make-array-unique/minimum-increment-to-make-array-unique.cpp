class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int,int>mpp;
        for(auto num : nums)
            mpp[num]++;
        int res = 0;
        for(auto it : mpp) {
            if(it.second > 1) {
                mpp[it.first + 1] += it.second - 1;
                res += it.second - 1;
                mpp[it.first] = 1;
            }
        }
        return res;
    }
};