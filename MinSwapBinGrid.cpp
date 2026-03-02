class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>czero(n,0);
        for(int i=0;i<n;i++){
            int j=n-1;
            int c=0;
            while(j>0 && grid[i][j]==0) {
                c++;
                j--;
            }
            czero[i]=c;
        }
        int tots=0;
        for(int i=0;i<n;i++){
            int need=n-i-1;
            int k=i;
            while(k<n && czero[k]< need)k++;
            if(k==n) return -1;
             tots+=k-i;
             while(k>i) {
                swap(czero[k],czero[k-1]);
                k--;
             }
        }
        return tots;
    }
};
