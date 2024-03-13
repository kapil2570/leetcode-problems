class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1 ; i<=n ; i++) {
            int sum1=0;
            int sum2=0;
            sum1 = (i*(1+i))/2;
            sum2 = ((n-i+1)*(i+n))/2;
            if(sum1==sum2)
                return i;
        }
        return -1;
    }
};