class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0, white=0, blue=0;
        for(auto num : nums) {
            if(num==0) red++;
            else if(num==1) white++;
            else blue++;
        }
        int i=0;
        while(red--) nums[i++] = 0;
        while(white--) nums[i++] = 1;
        while(blue--) nums[i++] = 2;
    }
};