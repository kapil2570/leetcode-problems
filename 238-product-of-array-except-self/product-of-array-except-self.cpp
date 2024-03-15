class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefProd=1, sufProd=1;
        vector<int>ans(n,1);
        for(int i=0 ; i<n ; i++) {
            prefProd *= nums[i];
            ans[i] = prefProd;
        }

        for(int i=n-1 ; i>=1 ; i--) {
            if(i!=0)
                ans[i] = ans[i-1]*sufProd;
            sufProd = sufProd*nums[i];
        }
        ans[0] = sufProd;
        return ans;
    }
};