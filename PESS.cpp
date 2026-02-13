// Partition Equal Subset Sum 
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int x:nums) sum+=x;

        if(sum%2!=0) return false;
        else{
            sum=sum/2;
            return isSubset(nums,sum,n);
        }
    }

    bool isSubset(vector<int> nums,int sum,int n){
    vector<vector<bool>> res(n+1, vector<bool>(sum+1, false));

        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0) res[i][j]=false;
                if(j==0) res[i][j]=true;
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j){
                    res[i][j]=res[i-1][j]||(res[i-1][j-nums[i-1]]) ;
                }
                 else{
                    res[i][j]=res[i-1][j];
                 }
            }
        }
            return res[n][sum];
        }
};
