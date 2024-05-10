//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> ans;
    vector<int> jugglerSequence(long long N)
    {
        ans.push_back(N);
        if (N==1)
            return ans;
        else if (N%2==0)
        {
            ans.push_back(sqrt(N));
            jugglerSequence(sqrt(N));
        }
        else
        {
            ans.push_back(sqrt(N*N*N));
            jugglerSequence(sqrt(N*N*N));
        }
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends