class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int len = arr.size();
        int low=0, high=len-1;
        while(low<=high) {
            int mid = (low+high)/2;
            if(arr[mid]-mid-1 < k)
                low=mid+1;
            else
                high=mid-1;
        }
        return k+high+1;
    }
};