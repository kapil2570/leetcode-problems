class Solution {
public:
    bool check(vector<int>& nums) {
        int check=0;
        int i=0;
        for(i=0 ; i<nums.size()-1 ; i++)
        {
            if(nums[i]<=nums[i+1])
                continue;
            else if(nums[i]>nums[i+1] && !check)
            {
                check = 1;
            }
            else
                break;
        }
        bool dekho_to = true;
        if(check==1)
            dekho_to = nums[nums.size()-1]<=nums[0];
        return (i==nums.size()-1 && dekho_to);
    }
};