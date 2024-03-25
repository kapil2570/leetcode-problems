class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        for(int i=0 ; i<n ; i++) {
            int ind = abs(nums[i])-1;
            if(nums[ind] < 0)
                res.push_back(abs(nums[i]));
            else
                nums[ind] = -nums[ind];
        }
        return res;
    }
};