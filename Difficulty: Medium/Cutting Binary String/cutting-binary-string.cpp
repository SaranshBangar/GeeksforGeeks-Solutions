class Solution {
  public:
    unordered_set<string> power5;

    void precompute() {
        for (long long x = 1; x <= 1e9; x *= 5) {
            string bin = "";
            long long y = x;
            while (y > 0) {
                bin = char('0' + (y % 2)) + bin;
                y /= 2;
            }
            power5.insert(bin);
        }
    }

    int solve(int i, string &s, vector<int>& dp) {
        if (i == s.length()) return 0;
        if (dp[i] != -1) return dp[i];

        int res = 1e9;
        string curr = "";

        for (int j = i; j < s.length(); ++j) {
            curr += s[j];

            if (s[i] == '0') break;  

            if (power5.count(curr)) {
                int sub = solve(j + 1, s, dp);
                if (sub != 1e9)
                    res = min(res, 1 + sub);
            }
        }

        return dp[i] = res;
    }

    int cuts(string s) {
        precompute();

        int n = s.length();
        vector<int> dp(n, -1);
        int ans = solve(0, s, dp);

        return (ans >= 1e9 ? -1 : ans);
    }
};