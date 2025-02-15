//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int sumOfSquares(int n)
    {
        int ans=0;
        for (int i=1;i<=n;i++)
            ans+=(i*i);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int number;
        cin >> number;

        Solution ob;
        int ans = ob.sumOfSquares(number);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends