class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto num:nums) {
            mpp[num]++;
        }
        int maxFreq=0;
        for(auto it:mpp) {
            maxFreq = max(maxFreq,it.second);
        }
        int cnt=0;
        for(auto it:mpp) {
            if(it.second==maxFreq)
                cnt += maxFreq;
        }
        return cnt;
    }
};