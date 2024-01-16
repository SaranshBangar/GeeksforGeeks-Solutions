//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> swapTriangle(int N, vector<vector<int>> A)
    {
        for (int i=0;i<N;i++)
        {
            for (int j=i;j<N;j++)
            {
                swap(A[i][j], A[j][i]);
            }
        }
        return A;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> A(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> A[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.swapTriangle(N, A);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
}
// } Driver Code Ends