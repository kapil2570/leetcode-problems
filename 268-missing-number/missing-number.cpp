class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = (len*(len+1))/2;
        for(auto num : nums) {
            sum -= num;
        }
        return sum;
    }
};