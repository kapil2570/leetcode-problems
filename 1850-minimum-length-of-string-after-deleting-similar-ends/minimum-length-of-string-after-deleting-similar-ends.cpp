class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int low=0, high=n-1;
        while(low<high) {
            if(s[low]==s[high]) {
                while(low<high) {
                    if(s[low]==s[low+1])
                        low++;
                    if(s[high]==s[high-1])
                        high--;
                    if(s[low]!=s[low+1] && s[high]!=s[high-1]) {
                        if(high-low==2)
                            return 1;
                        break;
                    }
                }
                low++;
                high--;
            }
            else
                break;
        }
        return max(high-low+1,0);
    }
};