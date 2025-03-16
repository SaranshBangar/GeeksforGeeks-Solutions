//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int MemCC(vector<int>& coins, int amount , vector<int> &dp)
    {
        if(amount == 0)
            return 0;
        if(amount < 0)
            return INT_MAX;
        if(dp[amount] != -1)
            return dp[amount];
        int mini = INT_MAX;
        for(int i = 0; i < coins.size(); i++)
        {
            int ans = MemCC(coins , amount - coins[i] , dp);
            if(ans != INT_MAX)
                mini = min(ans + 1 , mini);
            dp[amount] = mini;
        }
        return dp[amount];
    }
    int minCoins(vector<int> &coins, int sum)
    {
        vector<int> dp(sum + 1 , -1);
        int ans = MemCC(coins , sum , dp);
        return ans == INT_MAX ? -1 : ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends