class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>store;
        int n=nums.size(), sum=0;
        vector<int>res;
        for(int i=0 ; i<n ; i++)
            sum+=nums[i];
        for(auto num:nums)
        {
            if(store.find(num)!=store.end())
            {
                int dup=num;
                res.push_back(dup);
                break;
            }
            else
                store.insert(num);
        }
        int num = (n*(n+1))/2 - sum + res[0];
        res.push_back(num);
        return res;
    }
};