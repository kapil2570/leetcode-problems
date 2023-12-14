class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>temp;
        for(int i=0 ; i<m ; i++)
        {
            int sum = 0;
            for(int j=0 ; j<n ; j++)
            {
                if(grid[i][j])
                    sum+=1;
                else
                    sum-=1;
            }
            temp.push_back(sum);
        }
        for(int i=0 ; i<n ; i++)
        {
            int sum = 0;
            for(int j=0 ; j<m ; j++)
            {
                if(grid[j][i])
                    sum+=1;
                else
                    sum-=1;
            }
            temp.push_back(sum);
        }
        for(int i=0 ; i<m ; i++)
        {
            for(int j=0 ; j<n ; j++)
                grid[i][j]=temp[i]+temp[j+m];
        }
        return grid;
    }
};