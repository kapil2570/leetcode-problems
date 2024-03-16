class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int sum=0, res=0;
        mpp[sum]=-1;
        for(int i=0 ; i<n ; i++) {
            if(nums[i]) sum+=1;
            else sum-=1;
            if(mpp.find(sum)!=mpp.end())
                res = max(res,i-mpp[sum]);
            else
                mpp[sum] = i;
        }
        return res;
    }
};