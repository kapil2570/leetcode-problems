class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        int maxm = *max_element(nums.begin(),nums.end());
        if(len==maxm+1)
            return maxm+1;
        int reqSum = (maxm*(maxm+1))/2;
        return reqSum-sum;
    }
};