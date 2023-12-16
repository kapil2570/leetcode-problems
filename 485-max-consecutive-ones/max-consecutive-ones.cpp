class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxm=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(!nums[i])
                cnt=0;
            else
            {
                cnt++;
                maxm=max(maxm,cnt);
            }
        }
        return maxm;
    }
};