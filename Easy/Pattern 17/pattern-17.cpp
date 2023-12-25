//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) 
    {
        for (int i=1;i<=n;i++)
        {
            char c='A';
            for (int j=n-i;j>=1;j--)
            {
                cout<<" ";
            }
            for (int j=1;j<=i;j++)
            {
                cout<<c;
                c++;
            }
            c--;
            for (int j=i-1;j>=1;j--)
            {
                c--;
                cout<<c;
            }
            cout<<endl;
        }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends