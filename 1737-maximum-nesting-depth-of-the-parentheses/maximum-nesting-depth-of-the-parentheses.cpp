class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int res = 0;
        for(int i=0 ; i<s.size() ; i++) {
            if(s[i] == ')') {
                int cnt = st.size();
                res = max(res,cnt);
                st.pop();
            }
            else if(s[i] == '(')
                st.push(s[i]);
        }
        return res;
    }
};