class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>res;
        for(int i=0 ; i<nums.size() ; i++)
        {
            int complement = target-nums[i];
            if(mpp.find(complement)!=mpp.end())
                {
                    res.push_back(i);
                    res.push_back(mpp[complement]);
                    break;
                }
            mpp[nums[i]] = i;
        }
        return res;
    }
};