class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int ones=0, zeros=0;
        for(auto ch:s) {
            if(ch=='0')
                zeros++;
            else
                ones++;
        }
        for(int i=0 ; i<ones-1 ; i++) {
            s[i] = '1';
        }
        for(int i=ones-1 ; i<n-1 ; i++) {
            s[i] = '0';
        }
        s[n-1] = '1';
        return s;
    }
};