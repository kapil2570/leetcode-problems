class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        if(n==1 || n==2)
            return n-1;
        while(n!=2)
        {
            matches += n/2;
            if(n%2)
                n = n/2 + 1;
            else
                n /= 2;
        }
        return matches + 1;
    }
};