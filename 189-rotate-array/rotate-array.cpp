class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        k = n-k;
        if(n==1 || k==0) {
            return;
        }

        vector<int>temp(k);
        for(int i=0 ; i<k ; i++) {
            temp[i] = nums[i];
        }

        for(int i=0 ; i<n-k ; i++) {
            nums[i] = nums[i+k];
        }

        for(int i=n-k ; i<n ; i++) {
            nums[i] = temp[i-(n-k)];
        }
    }
};