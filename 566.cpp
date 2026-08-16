class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        if (mat.size() * mat[0].size() != r * c) {
            return mat;
        }

        int oldCols = mat[0].size();

        vector<vector<int>> ans(r, vector<int>(c));

        int k = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                int oldRow = k / oldCols;
                int oldCol = k % oldCols;

                ans[i][j] = mat[oldRow][oldCol];

                k++;
            }
        }
        return ans;
    }
};
