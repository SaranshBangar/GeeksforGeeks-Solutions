//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mindGame(int K)
    {
        return K/2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int K;
        
        cin>>K;

        Solution ob;
        cout << ob.mindGame(K) << endl;
    }
    return 0;
}
// } Driver Code Ends