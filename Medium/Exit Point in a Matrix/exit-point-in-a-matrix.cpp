//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  private:
    // TC : O(N * M)
    // SC : O(1)
    vector<int> approach_1(int n, int m, vector<vector<int>>& mat) {
        int i = 0, j = 0;  // dir = L, R, U, D (4-directions)
        char dir = 'R';    // default
        while(i >= 0 && j >= 0 && i < n && j < m) {
            if (mat[i][j]) {
                mat[i][j] = 0;
                if (dir == 'R') {
                    dir = 'D';
                    i ++;
                }
                else if (dir == 'D') {
                    dir = 'L';
                    j --;
                }
                else if (dir == 'L') {
                    dir = 'U';
                    i --;
                }
                else if (dir == 'U') {
                    dir = 'R';
                    j ++;
                }
            }
            else {  // don't change the directions
                if (dir == 'R') j ++;
                else if (dir == 'D') i ++;
                else if (dir == 'L') j --;
                else if (dir == 'U') i --;
            }
        }
        
        // i or j becomes one more after breaking out of loop so decrease one i/j to fix the answer
        if (dir == 'R') j --;
        else if (dir == 'D') i --;
        else if (dir == 'L') j ++;
        else if (dir == 'U') i ++;

        return {i, j};
    }

    // TC : O(N * M)
    // SC : O(1)
    vector<int> approach_2(int n, int m, vector<vector<int>>& mat) {
        int i = 0, j = 0, dir = 1;  // dir = L, R, U, D (4-directions)
        while(i >= 0 && j >= 0 && i < n && j < m) {
            if (mat[i][j]) {
                mat[i][j] = 0;
                dir = (dir % 4) + 1;
            }
            if (dir == 1) j ++;
            else if (dir == 2) i ++;
            else if (dir == 3) j --;
            else i --;
        }
        
        // i or j becomes one more after breaking out of loop so decrease one to fix the answer
        if (dir == 1) j --;
        else if (dir == 2) i --;
        else if (dir == 3) j ++;
        else i ++;
        
        return {i, j};
    }
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& mat) {
        // return approach_1(n, m, mat);
        
        return approach_2(n, m, mat);
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends