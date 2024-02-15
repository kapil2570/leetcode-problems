#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int total = n + m;
        int medianIndex = total / 2;
        int i = 0, j = 0;
        int current, prev;
        
        while (i + j <= medianIndex) {
            prev = current;
            if (i < n && (j >= m || nums1[i] <= nums2[j])) {
                current = nums1[i];
                i++;
            } else {
                current = nums2[j];
                j++;
            }
        }
        
        if (total % 2 == 0) {
            return (current + prev) / 2.0;
        } else {
            return current;
        }
    }
};
