class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>freq1(26,0), freq2(26,0);
        set<char>st1, st2;
        for(auto it:word1)
        {
            freq1[it-'a']++;
            st1.insert(it);
        }
        for(auto it:word2)
        {
            freq2[it-'a']++;
            st2.insert(it);
        }
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1==freq2 && st1==st2;
    }
};