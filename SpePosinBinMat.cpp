class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int col = -1;
            int count = 0;

            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 1) {
                    count++;
                    col = j;
                }
            }

            if(count == 1) {
                int colCount = 0;

                for(int k = 0; k < n; k++) {
                    if(mat[k][col] == 1)
                        colCount++;
                }

                if(colCount == 1)
                    ans++;
            }
        }

        return ans;
    }
};
