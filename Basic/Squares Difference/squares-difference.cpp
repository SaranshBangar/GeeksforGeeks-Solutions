//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    long long int squaresDiff(int N)
    {
        long long int sqr1=(N*(N+1)*((2*N)+1))/6;
        long long int sum=(N*(N+1))/2;
        return (abs(sqr1-(sum*sum)));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.squaresDiff(N) << endl;
    }
    return 0;
}

// } Driver Code Ends