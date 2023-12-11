class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int>temp(len);
        for(int i=0 ; i<len ; i++)
        {
            int index = (i+k)%len;
            temp[index] = nums[i];
        }
        nums = temp;
    }
};