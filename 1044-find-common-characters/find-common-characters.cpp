class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int>commonChars(26,0);
        vector<string>res;
        for(char ch:words[0]) {
            commonChars[ch-'a']++;
        }
        for(int i=1 ; i<n ; i++) {
            vector<int>currentChars(26,0);
            for(char ch:words[i]) {
                currentChars[ch-'a']++;
            }
            for(int k=0 ; k<26 ; k++) {
                commonChars[k] = min(commonChars[k],currentChars[k]);
            }
        }
        for(int i=0 ; i<26 ; i++) {
            if(commonChars[i]) {
                int freq = commonChars[i];
                while(freq--) {
                    res.push_back(string(1,i+'a'));
                }
            }
        }
        return res;
    }
};