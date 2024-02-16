class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int low=0, high=n-1;
        int ind=-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][m-1]) {
                ind=mid;
                break;
            }
            else if(target>matrix[mid][m-1])
                low=mid+1;
            else
                high=mid-1;
        }
        if(ind==-1)
            return false;
        low=0, high=m-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(matrix[ind][mid]==target)
                return true;
            else if(target>matrix[ind][mid])
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};