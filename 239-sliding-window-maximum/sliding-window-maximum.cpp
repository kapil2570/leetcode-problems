class Solution {
public:
    struct Cmp {
        bool operator()(const pair<int,int>&p1, const pair<int,int>&p2) const {
            return p1.first < p2.first;
        }
    };

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, Cmp>pq;
        for(int i=0 ; i<k ; i++)
            pq.push(make_pair(nums[i],i));
        vector<int>res;
        int i=0, j=k;
        while(j<=n) {
            while(pq.top().second < i)
                pq.pop();
            res.push_back(pq.top().first);
            if(j<n)
                pq.push(make_pair(nums[j],j));
            i++;
            j++;
        }
        return res;
    }
};