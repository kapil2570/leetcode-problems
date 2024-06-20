class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1, high=position.back()-position.front();
        while(low<high) {
            int mid = high - (high-low)/2;
            int count = 1, curr=position.front();
            for(auto num : position) {
                if(num-curr>=mid) {
                    curr = num;
                    count++;
                }
            }
            if(count>=m)
                low=mid;
            else
                high=mid-1;
        }
        return low;
    }
};