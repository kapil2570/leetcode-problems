class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
            return 0;
        else if(n==1 || n==2)
            return 1;
        int a = 0, b = 1, c = 1, d;
        n -= 2;
        while(n) {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
            n--;
        }
        return d;
    }
};