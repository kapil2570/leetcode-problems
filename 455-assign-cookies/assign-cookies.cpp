class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gr=0, sz=0, out=0;
        while(gr<g.size() && sz<s.size())
        {
            if(s[sz]>=g[gr])
            {
                out++;
                gr++;
                sz++;
            }
            else
                sz++;
        }
        return out;
    }
};