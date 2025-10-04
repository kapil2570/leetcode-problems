class Solution {
public:
    bool check(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int count = 0;
        for(i=0 ; i<n-1 ; i++) {
            if(nums[i] > nums[i+1]) {
                if(count==0) count++;
                else break;
            }
        }
        if((i==n-1 && nums[i] <= nums[0]) || count==0) return true;
        return false;
    }
};