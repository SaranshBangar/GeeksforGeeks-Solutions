class Solution {
  public:
    int getCount(int n)
    {
        if (n == 1) return 10;
        vector<vector<int>> adj = {
            {0, 8},     // 0
            {1, 2, 4},  // 1
            {2, 1, 3, 5}, // 2
            {3, 2, 6},  // 3
            {4, 1, 5, 7}, // 4
            {5, 2, 4, 6, 8}, // 5
            {6, 3, 5, 9}, // 6
            {7, 4, 8}, // 7
            {8, 5, 7, 9, 0}, // 8
            {9, 6, 8}  // 9
        };

        vector<vector<long long>> dp(n + 1, vector<long long>(10, 0));


        for (int i = 0; i < 10; i++) {
            dp[1][i] = 1;
        }

        // Fill the dp table
        for (int len = 2; len <= n; len++) {
            for (int digit = 0; digit < 10; digit++) {
                dp[len][digit] = 0;
                for (int neighbor : adj[digit]) {
                    dp[len][digit] += dp[len - 1][neighbor];
                }
            }
        }

        long long totalCount = 0;
        for (int digit = 0; digit < 10; digit++) {
            totalCount += dp[n][digit];
        }

        return totalCount;
    }
};