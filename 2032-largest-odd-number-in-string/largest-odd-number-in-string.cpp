class Solution {
public:
    string largestOddNumber(string num) {
        string res = "";
        for(int i=num.size()-1 ; i>=0 ; i--)
        {
            if(num[i]%2!=0)
            {
                res = num.substr(0,i+1);
                break;
            }
        }
        return res;
    }
};