class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        while(i>=1)
        {
            if(nums[i]>nums[i-1])
                break;
            i--;
        }
        if(i==0)
        {
            reverse(nums.begin()+0, nums.begin()+nums.size());
            return;
        }
        int num = nums[i-1];
        int justlarg=INT_MAX, j;
        for(int check=i ; check<nums.size() ; check++)
        {
            if(nums[check]>num && nums[check]<=justlarg)
            {
                j = check;
                justlarg = nums[check];
            }
        }
        swap(nums[i-1],nums[j]);
        reverse(nums.begin()+i, nums.begin()+nums.size());
    }
};