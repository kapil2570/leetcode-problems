class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mpp;
        int res=0;
        for(auto it:s)
            mpp[it]++;
        for(auto it:t)
            mpp[it]--;
        for(auto it:mpp){
            if(it.second<0)
                res += it.second;
        }
        return abs(res);
    }
};