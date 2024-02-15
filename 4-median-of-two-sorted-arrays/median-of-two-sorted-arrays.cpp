class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        vector<int>temp;
        for(auto num:nums1)
            temp.push_back(num);
        for(auto num:nums2)
            temp.push_back(num);
        sort(temp.begin(),temp.end());
        if((m+n)%2) {
            int ind = (m+n-1)/2;
            double mid = temp[ind];
            return mid;
        }
        return (temp[(m+n-1)/2] + temp[(m+n)/2]) / 2.0;
    }
};