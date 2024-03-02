class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0 ; i<nums.size() ; i++) {
            int num = nums[i]*nums[i];
            if(mpp.find(num)==mpp.end())
                mpp[num] = 1;
            else
                mpp[num]++;
        }
        int i=0;
        for(auto it:mpp) {
            int freq = it.second;
            while(freq--) {
                nums[i] = it.first;
                i++;
            }
        }
        return nums;
    }
};