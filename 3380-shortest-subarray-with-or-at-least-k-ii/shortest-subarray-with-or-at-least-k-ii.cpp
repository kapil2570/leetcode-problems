class Solution {
public:
    long long toDec(vector<int>&bits) {
        long long num = 0;
        for(int i=0 ; i<32 ; i++) {
            if(bits[i]) {
                num += (1LL << (31 - i));
            }
        }
        return num;
    }

    vector<int>addBin(vector<int>&a, vector<int>&b) {
        for(int i=0 ; i<32 ; i++) {
            a[i] += b[i];
        }
        return a;
    }

    vector<int>subtractBin(vector<int>&a, vector<int>&b) {
        for(int i=0 ; i<32 ; i++) {
            a[i] -= b[i];
        }
        return a;
    }

    vector<int>toBin(int num) {
        vector<int>bits;
        while(num) {
            bits.push_back(num%2);
            num /= 2;
        }
        while(bits.size()<32) {
            bits.push_back(0);
        }
        reverse(bits.begin(),bits.end());
        return bits;
    }

    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = 0;
        vector<int>bits(32,0);
        int res = INT_MAX;
        while(right<n) {
            vector<int>add = toBin(nums[right]);
            bits = addBin(bits,add);
            while(left<=right && toDec(bits)>=k) {
                res = min(res,right-left+1);
                vector<int>subt = toBin(nums[left]);
                bits = subtractBin(bits,subt);
                left++;
            }
            right++;
        }
        return res!=INT_MAX ? res : -1;
    }
};