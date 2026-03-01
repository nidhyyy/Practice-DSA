class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        vector<int> res;
        int r = mat.size();
        if (r == 0) return res;
        int c = mat[0].size();
        if (c == 0) return res;
        if (r == 1) {
            for (int j = 0; j < c; j++) res.push_back(mat[0][j]);
        } else if (c == 1) {
            for (int i = 0; i < r; i++) res.push_back(mat[i][0]);
        } else {
            for (int j = 0; j < c; j++) res.push_back(mat[0][j]);
            
            for (int i = 1; i < r; i++) res.push_back(mat[i][c-1]);
            
            for (int j = c-2; j >= 0; j--) res.push_back(mat[r-1][j]);
            
            for (int i = r-2; i >= 1; i--) res.push_back(mat[i][0]);
        }
        return res;
    }
};
