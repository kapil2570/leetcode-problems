class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        for(int i=0 ; i<grid.size()-2 ; i++) {
            vector<int>temp;
            for(int j=0 ; j<grid[0].size()-2 ; j++) {
                int maxm = 0;
                for(int k=i ; k<=i+2 ; k++) {
                    for(int r=j ; r<=j+2 ; r++) {
                        maxm = max(maxm,grid[k][r]);
                    }
                }
                temp.push_back(maxm);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};