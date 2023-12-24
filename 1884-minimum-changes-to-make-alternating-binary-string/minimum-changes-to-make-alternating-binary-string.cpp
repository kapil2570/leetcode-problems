class Solution {
public:
    int minOperations(string s) {
        int cnt1=0, cnt2=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(i%2==0)
            {
                cnt1+=abs(s[i]-'1');
                cnt2+=abs(s[i]-'0');
            }
            else
            {
                cnt1+=abs(s[i]-'0');
                cnt2+=abs(s[i]-'1');
            }
        }
        return min(cnt1,cnt2);
    }
};