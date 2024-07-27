//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string str)
    {
        int n=str.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        string rev=str;
        reverse(rev.begin(),rev.end());
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(str[i-1]==rev[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return n-dp[n][n];
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends