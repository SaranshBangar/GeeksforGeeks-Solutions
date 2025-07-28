class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat)
    {
        int n = mat.size();
        if(!n) return 0;
        int mxValue = 0, m = mat[0].size();
        
        for(int i=0; i<n; i++){
            int cur=0;
            for(int j=0; j<m; j++)  cur += mat[i][j];
            mxValue = max(mxValue, cur);
        }
        
        for(int i=0; i<m; i++){
            int cur=0;
            for(int j=0; j<n; j++)  cur += mat[j][i];
            mxValue = max(mxValue, cur);
        }
        
        int ans=0;
        for(vector<int> cur: mat)
            ans += mxValue - accumulate(cur.begin(), cur.end(), 0);
        
        return ans;
    }
};