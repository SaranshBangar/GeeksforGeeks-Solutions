//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxProfit(vector<int> &price)
    {
        int n = price.size();
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>> (2, vector<int> (3, 0)));
        for(int i = n - 1; i > -1; i--)
        {
            for(int j = 0; j < 2; j++)
            {
                for(int k = 1; k < 3; k++)
                {
                    dp[i][j][k] = 0;
                    if(j)
                        dp[i][j][k] = max(price[i] + dp[i + 1][0][k - 1], dp[i + 1][1][k]);       
                    else dp[i][j][k] = max(-price[i] + dp[i + 1][1][k], dp[i + 1][0][k]);
                }
            }
        }
        return dp[0][0][2];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends