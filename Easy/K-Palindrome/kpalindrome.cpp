//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int kPalindrome(string str, int n, int k) {
        string revStr = str;
        reverse(revStr.begin(), revStr.end());
        return (isKPalDP(str, revStr, n, n) <= k*2);
    }

private:
    // find if given string is K-Palindrome or not
    int isKPalDP(string str1, string str2, int m, int n) {
        // Create a table to store results of subproblems
        int dp[m + 1][n + 1];

        // Fill dp[][] in bottom up manner
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                // If first string is empty, only option is to
                // remove all characters of second string
                if (i == 0)
                    dp[i][j] = j; // Min. operations = j

                // If second string is empty, only option is to
                // remove all characters of first string
                else if (j == 0)
                    dp[i][j] = i; // Min. operations = i

                // If last characters are same, ignore last character
                // and recur for remaining string
                else if (str1[i - 1] == str2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];

                // If last character are different, remove it
                // and find minimum
                else
                 dp[i][j] = 1 + min(dp[i - 1][j], // Remove from str1
                                 dp[i][j - 1]); // Remove from str2
            }
        }

        return dp[m][n];
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends