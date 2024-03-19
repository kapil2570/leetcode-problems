class Solution {
public:
    int mod = 1e9+7;

    long long power(long long x, long long n) {
        long long ans = 1LL;
        while(n) {
            if(n%2) {
                ans = (ans*x)%mod;
                n -= 1;
            }
            else {
                x = (x*x)%mod;
                n /= 2;
            }
        }
        return ans%mod;
    }

    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;
        return (power(5,even)*power(4,odd))%mod;
    }
};