class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(), sum=0;
        vector<int>res;
        for(int i=0 ; i<n-1 ; i++)
        {
            sum+=nums[i];
            if(nums[i]==nums[i+1])
            {
                res.push_back(nums[i]);
            }
        }
        sum+=nums[n-1];
        int num = (n*(n+1))/2 - sum + res[0];
        res.push_back(num);
        return res;
    }
};