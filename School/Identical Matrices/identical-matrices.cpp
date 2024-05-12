//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int areMatricesIdentical(int N, vector<vector<int>> Grid1, vector<vector<int>> Grid2)
    {
        for (int i=0;i<N;i++)
        {
            for (int j=0;j<N;j++)
            {
                if (Grid1[i][j]!=Grid2[i][j])
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
        int N;
        cin >> N;
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        vector<vector<int>> Grid2(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid2[i][j];
        Solution ob;
        cout << ob.areMatricesIdentical(N, Grid1, Grid2) << "\n";
    }
}
// } Driver Code Ends