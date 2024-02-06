class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row_ind;
        unordered_set<int> col_ind;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    row_ind.insert(i);
                    col_ind.insert(j);
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (row_ind.find(i) != row_ind.end() ||
                    col_ind.find(j) != col_ind.end()) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};