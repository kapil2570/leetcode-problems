class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefProd=1, suffProd=1;
        vector<int>ans(n,1);
        for(int i=0 ; i<n ; i++) {
            ans[i] = prefProd;
            prefProd *= nums[i];
        }

        for(int i=n-1 ; i>=0 ; i--) {
            ans[i] *= suffProd;
            suffProd *= nums[i];
        }
        return ans;
    }
};