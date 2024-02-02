class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        vector<int>res(2,-1);
        if(nums.size()==0)
            return res;
        while(low<high) {
            int mid=(low+high)/2;
            if(nums[mid]>=target) {
                high=mid;
            }
            else
                low=mid+1;
        }
        if(nums[low]!=target)
            return res;
        else
            res[0]=low;
        
        high=nums.size()-1;
        while(low<high) {
            int mid=(low+high)/2+1;
            if(nums[mid]<=target)
                low=mid;
            else
                high=mid-1;
        }
        res[1]=high;
        return res;
    }
};