//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> memo;
    int LCS(int m,int n,string &s1, string &s2)
    {
        if(m==0 || n==0)
            return 0;
        if(memo[m][n]!=-1)
            return memo[m][n];
        else if(s1[m-1]==s2[n-1])
            memo[m][n]=1+LCS(m-1,n-1,s1,s2);
        else memo[m][n]=max(LCS(m-1,n,s1,s2),LCS(m,n-1,s1,s2));
        return memo[m][n];
    }
    int lcs(string &s1, string &s2)
    {
        int m=s1.size();
        int n=s2.size();
        memo.assign(m+1, vector<int>(n+1, -1));
        return LCS(m,n,s1,s2);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends