class Solution {
public:
    bool isNStraightHand(vector<int> hand, int groupSize) {
        map<int,int>mpp;
        for(auto num:hand) {
            mpp[num]++;
        }
        for(auto it:mpp) {
            if(it.second > 0) {
                for(int i=groupSize-1 ; i>=0 ; i--) {
                    if((mpp[it.first + i] -= mpp[it.first]) < 0)
                        return false;
                }
            }
        }
        return true;
    }
};