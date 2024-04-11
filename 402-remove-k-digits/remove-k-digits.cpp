class Solution {
public:
    string removeKdigits(string num, int k) {
        deque<int>q;
        int n = num.size();
        if(k>=n)
            return "0";
        for(int i=0 ; i<n ; i++) {
            while(k>0 && !q.empty() && q.back()>num[i]) {
                q.pop_back();
                k--;
            }
            q.push_back(num[i]);
            if(q.size()==1 && q.back()=='0' && i<n-1)
                q.pop_back();
        }
        while(!q.empty() && k>0) {
            q.pop_back();
            k--;
        }
        string res;
        while(!q.empty()) {
            res.push_back(q.front());
            q.pop_front();
        }
        return res.empty() ? "0" : res;
    }
};