class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = min(word1.size(), word2.size());
        string res;
        for(int i=0 ; i<len ; i++)
        {
            res.push_back(word1[i]);
            res.push_back(word2[i]);
        }
        string temp;
        if(word1.size()>word2.size())
            temp = word1;
        else if(word1.size()<word2.size())
            temp = word2;
        for(int i=len ; i<temp.size() ; i++)
        {
            res.push_back(temp[i]);
        }
        return res;
    }
};