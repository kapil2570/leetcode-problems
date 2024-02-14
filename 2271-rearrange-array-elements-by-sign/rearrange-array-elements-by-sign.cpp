class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,0);
        int pos=0, neg=1;
        for(auto num : nums) {
            if(num>0) {
                res[pos] = num;
                pos+=2;
            }
            else {
                res[neg] = num;
                neg+=2;
            }
        }
        return res;
    }
};