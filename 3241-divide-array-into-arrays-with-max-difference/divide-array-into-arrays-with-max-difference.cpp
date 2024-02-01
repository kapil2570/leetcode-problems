class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int len=nums.size();
        if(len%3)
            return vector<vector<int>>();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>temp={nums[0]};
        int j=0;
        for(int i=1 ; i<len ; i++)
        {
            if(i%3==0 || nums[i]-nums[j]<=k)
                temp.push_back(nums[i]);
            else
            {
                res.clear();
                break;
            }
            if((i+1)%3==0)
            {
                res.push_back(temp);
                temp.clear();
                j+=3;
            }
        }
        return res;
    }
};