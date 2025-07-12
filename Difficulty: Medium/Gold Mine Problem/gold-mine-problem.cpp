class Solution {
  public:
    vector<vector<int>>dp;
    int n,m;
    
    int solve(vector<vector<int>>& mat,int i,int j){
        if(i >= n || i < 0 || j >= m || j < 0){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int rdu = solve(mat,i - 1, j + 1);
        int r = solve(mat,i, j + 1);
        int rdd = solve(mat,i + 1, j + 1);
        
        return dp[i][j] = mat[i][j] + max(rdu,max(rdd,r));
    }
    int maxGold(vector<vector<int>>& mat) {
        n = mat.size(),m = mat[0].size();
        
        dp.assign(n,vector<int>(m,-1));
        
        int ans = 0;
        
        for(int i = 0; i < n;i++){
            ans = max(solve(mat,i,0),ans);
        }
        
        return ans;
    }
};