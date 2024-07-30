//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<string> ans;
    void find(vector<vector<int>> &mat, int i, int j, int n, vector<vector<bool>> vis, string st)
    {
        if(vis[i][j] || mat[i][j]==0)
            return;
        if(i==n-1 && j==n-1)
        {
            ans.push_back(st);
            return;
        }
        vis[i][j]=true;
        if(i<n-1)
            find(mat, i+1, j, n, vis, st+"D");
        if(j<n-1)
            find(mat, i, j+1, n, vis, st+"R");
        if(i>0)
            find(mat, i-1, j, n, vis, st+"U");
        if(j>0)
            find(mat, i, j-1, n, vis, st+"L");
    }
    vector<string> findPath(vector<vector<int>> &mat)
    {
        if(mat[0][0]==0)
            return {"-1"};
        int n = mat.size();
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        find(mat, 0, 0, n, vis, "");
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends