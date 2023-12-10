class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int check = 0, i = 1;
        int cnt = 0;
        while(check<i && i<nums.size())
        {
            if(nums[check]!=nums[i])
            {
                int temp = nums[check+1];
                nums[check+1] = nums[i];
                nums[i] = temp;
                check++;
                cnt++;
            }
            i++;
        }
        return cnt+1;
    }
};