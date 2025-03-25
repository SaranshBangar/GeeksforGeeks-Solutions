//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int countWays(string &s) {
        const int n = (s.size() + 1) / 2;
        
        std::vector<std::vector<std::array<int, 2>>> dp(n, std::vector<std::array<int, 2>>(n));
        for (int i = 0; i < n; ++i) {
            dp[i][i][s[i * 2] == 'T'] = 1;
        }
        
        for (int len = 1; len < n; ++len) {
            for (int r = len; r < n; ++r) {
                const int l = r - len;

                for (int k = l; k < r; ++k) {
                    for (int i = 0; i < 2; ++i) {
                        for (int j = 0; j < 2; ++j) {
                            bool idx;
                            if (s[k * 2 + 1] == '&') {
                                idx = i & j;
                            }
                            else if (s[k * 2 + 1] == '|') {
                                idx = i | j;
                            }
                            else {
                                idx = i ^ j;
                            }
                            
                            dp[l][r][idx] += dp[l][k][i] * dp[k + 1][r][j];
                        }
                    }
                }
            }
        }
        
        return dp[0][n - 1][1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        int ans = ob.countWays(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends