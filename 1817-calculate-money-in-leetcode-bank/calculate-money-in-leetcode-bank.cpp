class Solution {
public:
    int totalMoney(int n) {
        if(n<=7)
            return (n*(n+1))/2;
        int cnt = n/7;
        int res = (cnt*((7*cnt)+49))/2;
        int rem = n%7;
        res += (rem*((2*(cnt+1))+(rem-1)))/2;
        return res;
    }
};