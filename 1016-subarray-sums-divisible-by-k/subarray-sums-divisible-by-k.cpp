class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        vector<int> freq(K, 0);
        freq[0] = 1;

        int sum = 0;
        int count = 0;

        for (int i = 0; i < A.size(); i++) {
            sum = sum + A[i];
            int remainder = sum % K;
            if (remainder < 0) remainder += K;
            count += freq[remainder];
            freq[remainder]++;
        }
        return count;
    }
};