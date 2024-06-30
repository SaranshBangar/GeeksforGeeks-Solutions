//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    double simpleInterest(int P, int R, int T) 
    {
        double p=P, r=R, t=T;
        double ans=(p*r*t)/100;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int P, R, T;
        cin >> P >> R >> T;
        Solution ob;
        cout << fixed << setprecision(2);
        cout << ob.simpleInterest(P, R, T) << "\n";
    }
}

// } Driver Code Ends