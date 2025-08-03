class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat, vector<vector<int>>& opr)
    {
        int n = mat.size(); int m = mat[0].size();
        vector<vector<int>> temp(n, vector<int>(m, 0));
        
        for(auto x : opr){
            int val = x[0];
            int r1 = x[1]; int c1 = x[2];
            int r2 = x[3]; int c2 = x[4];
            
            temp[r1][c1] += val;
            if(c2 + 1 < m) temp[r1][c2 + 1] -= val;
            if(r2 + 1 < n) temp[r2 + 1][c1] -= val;
            if(c2 + 1 < m && r2 + 1 < n) temp[r2 + 1][c2 + 1] += val;
        }
        
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                temp[i][j] += temp[i-1][j];
            }
        }
        
        for(int j = 1; j < m; j++){
            for(int i = 0; i < n; i++){
                temp[i][j] += temp[i][j-1];
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                mat[i][j] += temp[i][j];
            }
        }
        
        return mat;
    }
};