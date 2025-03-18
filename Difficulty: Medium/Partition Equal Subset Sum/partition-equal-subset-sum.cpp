//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool equalPartition(vector<int>& arr)
    {
        int N=arr.size();
        int sum=0;
        for (int i=0;i<N;i++)
            sum+=arr[i];
        if (sum%2!=0)
            return 0;
        int target=sum/2;
        vector<vector<bool>> dp(N + 1, vector<bool>(target+1, false));
        for (int i=0;i<=N;i++)
            dp[i][0]=true;
        for (int i=1;i<=N;i++)
        {
            for (int j=1;j<=target;j++)
            {
                if (j<arr[i-1])
                    dp[i][j]=dp[i-1][j];
                else dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
        return dp[N][target] ? 1 : 0;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends