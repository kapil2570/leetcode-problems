class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size(), rows=0;
        map<int,int>freq;
        for(int i=0 ; i<n ; i++)
        {
            freq[nums[i]]++;
            rows=max(rows,freq[nums[i]]);
        }
        vector<vector<int>>res;
        for(int i=0 ; i<rows ; i++)
        {
            int j=0;
            vector<int>row;
            for(auto it:freq)
            {
                if(it.second)
                {
                    row.push_back(it.first);
                    j++;
                    freq[it.first]--;
                }
            }
            res.push_back(row);
        }
        return res;
    }
};