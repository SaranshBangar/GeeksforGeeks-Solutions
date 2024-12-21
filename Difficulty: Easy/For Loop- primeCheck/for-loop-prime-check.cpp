//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string isPrime(int n)
    {
        if (n==1)
            return "No";
        else if (n==2 || n==3)
            return "Yes";
        for (int i=2;i<=sqrt(n);i++)
        {
            if (n%i==0)
                return "No";
        }
        return "Yes";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        Solution obj;
        string res = obj.isPrime(n);

        cout << res << "\n";

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends