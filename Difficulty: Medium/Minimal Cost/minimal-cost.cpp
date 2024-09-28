//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr)
    {
        int n=arr.size();
        vector<int> dp(n, INT_MAX);
        dp[n-1]=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=1;j<=k;j++)
            {
                if(i+j>=n)
                    break;
                dp[i]=min(dp[i], abs(arr[j+i]-arr[i])+dp[i+j]);
            }
        }
        return dp[0];
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
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends