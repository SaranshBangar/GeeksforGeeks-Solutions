//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    bool func(int num)
    {
        if (num>=0)
        {
            long long sr=sqrt(num);
            return ((sr*sr)==num);
        }
        return false;
    }
    int numOfPerfectSquares(int a, int b)
    {
        int count=0;
        for (int i=a;i<=b;i++)
        {
            if (func(i))
                count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.numOfPerfectSquares(a,b) << endl;
    }
    return 0;
}
// } Driver Code Ends