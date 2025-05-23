class Solution {
  public:
    int solve(int m, int n, vector<vector<int>> &dp, int sum, int x)
    {
        if (n == 0)
            return (sum == x) ? 1 : 0;
        if (dp[n][sum] != -1)
            return dp[n][sum];
        int ways = 0;
        for (int i = 1; i <= m; i++)
        {
            if (sum + i <= x)
                ways += solve(m, n - 1, dp, sum + i, x);
        }
        return dp[n][sum] = ways;
    }
    int noOfWays(int m, int n, int x)
    {
        vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
        return solve(m, n, dp, 0, x);
    }
};