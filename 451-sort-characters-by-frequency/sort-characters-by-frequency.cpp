class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        vector<string>bucket(s.size()+1 , "");
        for(auto ch : s) freq[ch]++;

        for(auto it : freq) {
            char ch = it.first;
            int cnt = it.second;
            bucket[cnt].append(cnt,ch);
        }

        string res;
        for(int i=s.size() ; i>=0 ; i--) {
            if(!bucket[i].empty()) {
                res.append(bucket[i]);
            }
        }
        return res;
    }
};