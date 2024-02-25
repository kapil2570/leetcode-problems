class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        int n = bottomLeft.size();
        long long maxArea = 0;
        for(int i=0 ; i<n ; i++) {
            for(int j=i+1 ; j<n ; j++) {
                long long currArea = 0;
                int a1 = max(bottomLeft[i][0],bottomLeft[j][0]);
                int b1 = max(bottomLeft[i][1],bottomLeft[j][1]);
                int a2 = min(topRight[i][0],topRight[j][0]);
                int b2 = min(topRight[i][1],topRight[j][1]);

                if(a2>a1 && b2>b1)
                    currArea = pow(min(a2-a1,b2-b1),2);
                maxArea = max(maxArea,currArea);
            }
        }
        return maxArea;
    }
};