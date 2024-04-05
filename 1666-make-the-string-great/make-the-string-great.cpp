class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        int n = s.size();
        for(int i=0 ; i<n ; i++) {
            while(!st.empty() && abs(st.top() - s[i]) == 32) {
                st.pop();
                i++;
            }
            if(i<n)
                st.push(s[i]);
        }
        string res = "";
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};