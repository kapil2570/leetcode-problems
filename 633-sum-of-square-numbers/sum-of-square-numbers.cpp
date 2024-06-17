class Solution {
public:
    bool judgeSquareSum(int c) {
        // int low=0, high=ceil(sqrt(c));
        // while(low<=high) {
        //     long long sum = pow(low,2) + pow(high,2);
        //     if(sum == c)
        //         return true;
        //     else if(sum > c)
        //         high--;
        //     else
        //         low++;
        // }
        // return false;

        for(int a=0 ; a<=sqrt(c) ; a++) {
            int b = sqrt(c - a*a);
            if(b*b == (c - a*a))
                return true;
        }
        return false;
    }
};