class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int res;
        unordered_map<int,int>freq;
        for(int i=0 ; i<n ; i++)
        {
            freq[nums[i]]++;
        }
        int halfLen = n/2;
        for(auto it:freq)
        {
            if(it.second>halfLen)
            {
                res = it.first;
            }
        }
        return res;
    }
};