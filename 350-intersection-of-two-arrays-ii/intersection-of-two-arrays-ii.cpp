class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>res;
        int n = nums1.size(), m = nums2.size();
        int first=0, second=0;
        int minm = min(n,m);
        while(first<n && second<m) {
            if(nums1[first]==nums2[second]) {
                res.push_back(nums1[first]);
                first++;
                second++;
            }
            else if(nums1[first]<nums2[second]) {
                first++;
            }
            else
                second++;
        }
        return res;
    }
};