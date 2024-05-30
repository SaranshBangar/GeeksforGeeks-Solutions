//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int mod=1000000000+7;
    int countWays(string s1, string s2)
    {
        int n = s1.length();
        int m = s2.length();
        if(n<m)
            return 0;
        vector<vector<int>> dp(n+1,vector<int>(m+1, 0));
        for (int i = 0; i <= n; ++i)
            dp[i][0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                dp[i][j] = dp[i-1][j];
                if (s1[i-1] == s2[j-1])
                    dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % mod;
            }
        }
        return dp[n][m];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends