//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int M = 1000000007;
    int ways(int x, int y)
    {
        int dp[501][501] = {{0}};
        dp[0][0] = 1;
        for (int i = 1; i <= x; i++)
            dp[i][0] = 1;
        for (int i = 1; i <= y; i++)
            dp[0][i] = 1;
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
                dp[i][j] = (dp[i - 1][j] % M + dp[i][j - 1] % M) % M;
        }
        return dp[x][y];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends