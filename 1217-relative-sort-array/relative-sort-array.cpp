class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mpp;
        for(auto num : arr1) mpp[num]++;
        int pos = 0;
        for(auto num : arr2) {
            while(mpp[num]-- > 0) {
                arr1[pos++] = num;
            }
        }
        for(auto it : mpp) {
            while(it.second-- > 0) arr1[pos++] = it.first;
        }
        return arr1;
    }
};