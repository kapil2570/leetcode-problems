class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefProd(n),sufProd(n);
        int pref=1, suf=1;
        for(int i=0 ; i<n ; i++) {
            pref *= nums[i];
            prefProd[i] = pref;
        }
        for(int i=n-1 ; i>=0 ; i--) {
            suf *= nums[i];
            sufProd[i] = suf;
        }
        int left=1, right=1;
        for(int i=0 ; i<n ; i++) {
            int prod=1;
            if(i!=0)
                prod *= prefProd[i-1];
            if(i!=n-1)
                prod *= sufProd[i+1];
            nums[i] = prod;
        }
        return nums;
    }
};