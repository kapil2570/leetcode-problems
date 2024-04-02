class Solution {
public:
    bool checkForBoth(string a, string b) {
        unordered_map<char,char>mpp;
        int n = a.size();
        for(int i=0 ; i<n ; i++) {
            if(mpp.find(a[i]) != mpp.end()) {
                if(b[i] != mpp[a[i]])
                    return false;
            }
            else {
                mpp[a[i]] = b[i];
            }
        }
        return true;
    }

    bool isIsomorphic(string s, string t) {
        return checkForBoth(s,t) && checkForBoth(t,s);    
    }
};