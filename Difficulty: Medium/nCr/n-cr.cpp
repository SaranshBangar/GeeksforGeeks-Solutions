//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    long long power(long long base, long long exp, const int mod)
    {
        long long result=1;
        base%=mod;
        while (exp>0)
        {
            if (exp%2==1)
                result=(result*base)%mod;
            base=(base*base)%mod;
            exp/=2;
        }
        return result;
    }
    
    int nCr(int n, int r)
    {
        if (r>n)
            return 0;
        const int mod=1e9+7;
        vector<long long> nfac(n+1, 1);
        vector<long long> rfac(r+1, 1);
        vector<long long> dfac(n-r+1, 1);
    
        for (int i = 1; i <= n; i++)
            nfac[i] = (nfac[i - 1] * i) % mod;
        for (int i = 1; i <= r; i++)
            rfac[i] = (rfac[i - 1] * i) % mod;
        for (int i = 1; i <= n - r; i++)
            dfac[i] = (dfac[i - 1] * i) % mod;
        long long ans = nfac[n];
        ans = (ans * power(rfac[r], mod - 2, mod)) % mod;
        ans = (ans * power(dfac[n - r], mod - 2, mod)) % mod;
        return static_cast<int>(ans);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends