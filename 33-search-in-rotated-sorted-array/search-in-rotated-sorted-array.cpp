class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lastElem = nums[n-1];
        int low = 0, high = n-1;
        while(low<high) {
            int mid = low + (high-low)/2;
            if(nums[mid] > lastElem) {
                low = mid+1;
            } else {
                high = mid;
            }
        }
        if(nums[low] == target) return low;
        
        if(low>0 && target >= nums[0] && target<= nums[low-1]) {
            high = low-1;
            low = 0;
        } else if(target >= nums[low] && target <= nums[n-1]) {
            high = n-1;
        } else return -1;
        if(low<0 || high<0 || low>n-1 || high>n-1) return -1;

        while(low <= high) {
            int mid = low + (high-low)/2;
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] < target) {
                low++;
            } else {
                high--;
            }
        }
        return -1;
    }
};