//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
    public:
    int Solve(string &s,string &str,int i,int j, vector<vector<int>>&dp)
    {
        if(i>=s.length() || j>=str.length())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=0;
        if(s[i]==str[j])
            ans=max(ans,1+Solve(s,str,i+1,j+1,dp));
        else ans=max(Solve(s,str,i+1,j,dp),Solve(s,str,i,j+1,dp));
        return dp[i][j]=ans;
    }
    int longestPalinSubseq(string &s)
    {
        string str=s;
        reverse(str.begin(),str.end());
        vector<vector<int>>dp(s.length(),vector<int>(s.length(),-1));
        return Solve(s,str,0,0,dp);
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends