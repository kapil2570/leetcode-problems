class Solution {
public:
    bool isPal(string s, int left, int right) {
        while(left<=right) {
            if(s[left++]!=s[right--])
                return false;
        }
        return true;
    }

    int countSubstrings(string s) {
        int count = 0;
        int len=s.size();
        for(int i=0 ; i<len ; i++) {
            for(int j=i ; j<len ; j++) {
                if(isPal(s,i,j))
                    count++;
            }
        }
        return count;
    }
};