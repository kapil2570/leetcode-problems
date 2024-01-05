class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>res;
        for(int elem:nums)
        {
            if(res.empty() || res[res.size()-1]<elem)
                res.push_back(elem);
            else
            {
                auto it = lower_bound(res.begin(), res.end(), elem);
                *it = elem;
            }
        }
        return res.size();
    }
};