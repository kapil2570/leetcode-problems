class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0, maxm = 0;
        for(int i=0 ; i<arr.size() ; i++) {
            if(arr[i]%2) {
                count++;
            }
            else {
                maxm = max(count,maxm);
                count = 0;
            }
        }
        maxm = max(maxm,count);
        return maxm>=3;
    }
};