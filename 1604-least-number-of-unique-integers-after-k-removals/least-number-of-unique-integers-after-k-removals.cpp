class Solution {
public:

    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        return a.second < b.second;
    }

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mpp;
        for(auto num:arr) 
            mpp[num]++;
        vector<pair<int,int>>vect;
        for(auto pr:mpp)
            vect.push_back(pr);
        sort(vect.begin(),vect.end(),cmp);
        long long sum=0, cnt=0;
        for(auto pr:vect) {
            if(sum+pr.second<=k) {
                sum+=pr.second;
                cnt++;
            }
        }
        int n = vect.size();
        return n-cnt;
    }
};