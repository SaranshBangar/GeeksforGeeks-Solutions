//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N)
    {
        int numBits=0;
        int temp=N;
        while (temp>0)
        {
            temp>>=1;
            numBits++;
        }
        if (N && !(N&(N-1)))
        {
            for (int i=1;i<=numBits;i++)
            {
                if (N&1)
                    return i;
                N>>=1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends