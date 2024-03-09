class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        if(nums1[0]>nums2[0])
            return getCommon(nums2,nums1);
        int i=0, j=0;
        int n1 = nums1.size(), n2 = nums2.size();
        while(i<n1 && j<n2) {
            if(nums1[i]<nums2[j])
                i++;
            else if(nums1[i]>nums2[j])
                j++;
            else
                return nums1[i];
        }
        return -1;
    }
};