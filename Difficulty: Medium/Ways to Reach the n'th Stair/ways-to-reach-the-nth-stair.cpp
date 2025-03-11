//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long countWays(int n)
    {
        if(n==1||n==2)
            return n;
        int prev2=1 , prev1=2;
        for(int i=3;i<=n;i++)
        {
            int sum=prev1+prev2;
            prev2=prev1;
            prev1=sum;
        }
        return prev1;
    }
};



//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends