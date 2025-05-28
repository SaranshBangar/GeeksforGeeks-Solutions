class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat)
    {
        int n = mat.size(); int m = mat[0].size();
        for (int k=0; k<n; k++)
        {
            vector<int> st(m);
            copy(mat[k].begin(), mat[k].end(), st.begin());
            for (int i=k+1; i<n; i++)
            {
                for (int j=0; j<m; j++)
                    if (mat[i][j]&&st[j]) st[j]++;
                if (count_if(st.begin(), st.end(), [](int e){return e>=2;})>=2) return true;
                copy(mat[k].begin(), mat[k].end(), st.begin());
            }
        }
        return false;
    }
};