class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        stack<pair<char,int>>st;
        for(int i=0 ; i<n ; i++) {
            if(!st.empty() && s[i] == ')' && st.top().first=='(')
                st.pop();
            else if(s[i]=='(' || s[i]==')')
                st.push({s[i],i});
        }
        int len = n - st.size();
        string res(len,' ');
        int ind = len-1;
        for(int i=n-1 ; i>=0 ; i--) {
            if(!st.empty() && i==st.top().second)
                st.pop();
            else {
                res[ind] = s[i];
                ind--;
            }
        }
        return res;
    }
};