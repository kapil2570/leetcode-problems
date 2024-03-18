class Solution {
public:
    static bool cmp(const vector<int>&a, vector<int>&b) {
        return a[0] < b[0];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end(),cmp);
        vector<int>minm = points[0];
        int count = n;
        for(int i=1 ; i<n ; i++) {
            if(points[i][0]>=minm[0] && points[i][0]<=minm[1]) {
                count--;
                minm[0] = min(minm[0],points[i][0]);
                minm[1] = min(minm[1],points[i][1]);
            }
            else
                minm = points[i];
        }
        return count;
    }
};