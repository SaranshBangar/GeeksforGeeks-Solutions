//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>>&mat)
    {
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            int n1 = 0;
            for(int j=0;j<n;j++)
                n1+=mat[i][j];
            int n2=0;
            for(int k=0;k<n;k++)
                n2+=mat[k][i];
            if(n1==0 && n2==n-1)
                return i;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends