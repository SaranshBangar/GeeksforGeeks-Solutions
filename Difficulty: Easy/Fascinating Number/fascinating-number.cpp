//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    bool fascinating(int n)
    {
        if (n==192 || n==219 || n==273 || n==327)
            return true;
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);

        if (ans) {
            cout << "true\n";
        } else {
            cout << "false\n";
        }
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends