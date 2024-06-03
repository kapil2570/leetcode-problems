class Solution {
public:
    int appendCharacters(string s, string t) {
        int ind=0;
        for(int i=0 ; i<s.size() ; i++) {
            if(s[i]==t[ind])
                ind++;
        }
        return t.size()-ind;
    }
};