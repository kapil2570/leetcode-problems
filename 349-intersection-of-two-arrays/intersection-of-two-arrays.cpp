class Solution {
public:
    bool search(vector<int>&nums , int num) {
        int low=0, high=nums.size()-1;
        while(low<=high) {
            int mid = (low+high)/2;
            if(nums[mid]==num)
                return true;
            else if(nums[mid]<num)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size())
            return intersection(nums2,nums1);
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        for(auto num:nums1) {
            if(find(res.begin(),res.end(),num)==res.end()) {
                if(search(nums2, num))
                    res.push_back(num);
            }
        }
        return res;
    }
};