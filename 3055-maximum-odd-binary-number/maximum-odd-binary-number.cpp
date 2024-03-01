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
        s = string(ones-1,'1') + string(zeros,'0') + '1';
        return s;
    }
};