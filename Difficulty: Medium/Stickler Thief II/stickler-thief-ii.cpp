//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> dp;

    int solve(vector<int>& arr, int start, int end, bool flag)
    {
        if (start > end) return 0;
        if (dp[start][flag] != -1) return dp[start][flag];
        int a = 0, b = 0;
        if (!flag || start != end)
            a = arr[start] + solve(arr, start + 2, end, start == 0 ? true : flag);
        b = solve(arr, start + 1, end, flag);
        return dp[start][flag] = max(a, b);
    }

    int maxValue(vector<int>& arr)
    {
        int n = arr.size();
        dp.resize(n, vector<int>(2, -1));
        return solve(arr, 0, n - 1, false);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends