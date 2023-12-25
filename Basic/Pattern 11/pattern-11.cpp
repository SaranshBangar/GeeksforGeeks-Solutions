//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n)
    {
        int count=1, ans;
        for (int i=1;i<=n;i++)
        {
            if (count%2==1)
            {
                for (int j=1;j<=i;j++)
                {
                    if (j%2==1)
                    {
                        ans=1;
                    }
                    else ans=0;
                    cout<<ans<<" ";
                }
            }
            else 
            {
                for (int j=1;j<=i;j++)
                {
                    if (j%2==0)
                    {
                        ans=1;
                    }
                    else ans=0;
                    cout<<ans<<" ";
                }
            }
            count++;
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