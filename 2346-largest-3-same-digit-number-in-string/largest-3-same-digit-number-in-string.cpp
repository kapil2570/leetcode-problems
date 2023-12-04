class Solution {
public:
    string largestGoodInteger(string num) {
        int len = num.size();
        char maxm = '\0';
        for(int i=0 ; i<len-2 ; i++)
        {
            if(num[i]==num[i+1] && num[i]==num[i+2] && (num[i])!=maxm)
            {
                maxm = max(maxm,num[i]);
                i+=2;
            }
        }
        string res;
        if(maxm!='\0')
        {
            for(int i=1 ; i<=3 ; i++)
            {
                res.push_back(maxm);
            }
        }
        return res;
    }
};