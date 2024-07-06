class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n)
            return 1+time%n;
        int num = time/(n-1);
        if(num%2==1)
            return n-time%(n-1);
        else
            return 1+time%(n-1);
    }
};