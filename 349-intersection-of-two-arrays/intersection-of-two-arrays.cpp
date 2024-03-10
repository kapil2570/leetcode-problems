class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size())
            return intersection(nums2,nums1);
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>res;
        for(auto num:nums1) {
            if(find(res.begin(),res.end(),num)==res.end() &&
                 find(nums2.begin(),nums2.end(),num)!=nums2.end())
                 res.push_back(num);
        }
        return res;
    }
};