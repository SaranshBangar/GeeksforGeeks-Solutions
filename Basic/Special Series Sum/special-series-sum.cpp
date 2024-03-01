//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int sumOfTheSeries(long long int n)
    {
        long long int count=0;
        for (long long int i=1;i<=n;i++)
        {
            long long int ans=0;
            for (long long int j=1;j<=i;j++)
            {
                ans+=j;
            }
            count+=ans;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.sumOfTheSeries(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
