//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int leftShops(long long int i, long long int L)
    {
        long long int ans=((pow(2, L))-i);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int i, L;
        cin >> i >> L;
        Solution ob;
        cout << ob.leftShops(i, L) << endl;
    }
    return 0;
}

// } Driver Code Ends