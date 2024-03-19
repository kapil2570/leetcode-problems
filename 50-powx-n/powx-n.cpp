class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 0) {
            return 1.0;
        }
        if (n < 0) {
            return 1.0 / myPow(x, -n);
        }
        double halfPow = myPow(x, n / 2);
        return (n % 2 == 0) ? halfPow * halfPow : halfPow * halfPow * x;
    }
};