class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(auto it:arr)
            freq[it]++;
        unordered_set<int>check;
        for(auto it:freq)
        {
            if(check.find(it.second)!=check.end())
                return false;
            else
                check.insert(it.second);
        }
        return true;
    }
};