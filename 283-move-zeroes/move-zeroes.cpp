class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(!nums[i])
            {
                j = i;
                break;
            }
        }
        if(j==-1)
            return;
        
        for(int i=j+1 ; i<nums.size() ; i++)
        {
            if(nums[i])
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};