//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int difProblem(string N)
    {
        if (N.length()<=2)
            return 1;
        N.erase(unique(N.begin(), N.end()), N.end());
        if ((N[0]-'0')<(N[1]-'0'))
        {
            for (int i=0;i<N.length()-1;i++)
            {
                if ((N[i]-'0')>(N[i+1]-'0'))
                    return 0;
            }
        }
        else
        {
            for (int i=0;i<N.length()-1;i++)
            {
                if ((N[i]-'0')<(N[i+1]-'0'))
                    return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.difProblem(N) << endl;
    }
    return 0;
}
// } Driver Code Ends