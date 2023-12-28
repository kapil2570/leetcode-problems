class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1, mid;
        int ans1=-1, ans2=-1;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid]==target)
            {
                ans1=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        low=0, high=n-1;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid]==target)
            {
                ans2=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        vector<int>ans{ans1,ans2};
        return ans;
    }
};