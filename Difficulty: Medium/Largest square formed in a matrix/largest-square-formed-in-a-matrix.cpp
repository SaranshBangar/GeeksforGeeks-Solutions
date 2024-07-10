//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxSquare(int n, int m, vector<vector<int>> mat)
    {
        vector<vector<int>> dp(n, vector<int> (m, 0));
        int maxi = 0;
        for(int i=0; i<max(n, m); i++)
        {
            if(i < m && mat[n-1][i] == 1) 
            {
                dp[n-1][i] = 1;
                maxi = max(maxi, dp[n -1][i]);
            }
            if(i < n && mat[i][m-1] == 1)
            {
                dp[i][m-1] = 1;
                maxi = max(maxi,dp[i][m-1]);
            }
        }
        for(int i=n-2; i>=0; i--)
        {
            for(int j=m-2; j>=0; j--)
            {
                if(mat[i][j])
                    dp[i][j] = 1 + min(dp[i+1][j+1], min(dp[i+1][j], dp[i][j+1]));
                else dp[i][j] = 0;
                maxi = max(dp[i][j], maxi);
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n * m; i++)
            cin >> mat[i / m][i % m];

        Solution ob;
        cout << ob.maxSquare(n, m, mat) << "\n";
    }
    return 0;
}
// } Driver Code Ends