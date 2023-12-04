class Solution {
public:
    string largestGoodInteger(string num) {
        int len = num.size();
        int maxm = -1;
        for(int i=0 ; i<len-2 ; i++)
        {
            if(num[i]==num[i+1] && num[i]==num[i+2] && (num[i]-'0')!=maxm)
            {
                maxm = max(maxm,num[i]-'0');
                i+=2;
            }
        }
        string res;
        if(maxm!=-1)
        {
            for(int i=1 ; i<=3 ; i++)
            {
                res.push_back(maxm+'0');
            }
        }
        return res;
    }
};