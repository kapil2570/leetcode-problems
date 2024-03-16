class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(k>=n)
            return "0";
        else if(k==0)
            return num;
        stack<char>st;
        for(int i=0 ; i<n ; i++) {
            while(k>0 && !st.empty() && st.top()>num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);

            if(st.size()==1 && st.top()=='0')
                st.pop();
        }
        while(k>0 && !st.empty()) {
            st.pop();
            k--;
        }
        string res;
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();

        }
        reverse(res.begin(),res.end());
        if(res.size()==0)
            return "0";
        return res;
    }

};
