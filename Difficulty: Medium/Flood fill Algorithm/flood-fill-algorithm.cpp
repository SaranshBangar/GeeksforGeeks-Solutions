//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        int n = image.size(), m = image[0].size(), oldColor = image[sr][sc];
        
        if(newColor == oldColor) return image;
        queue<int> q; 
        
        image[sr][sc] = newColor;
        q.push(sr * m + sc);
        
        vector<int> change = {-1, 0, 1, 0};
        
        while(!q.empty()) {
            int front = q.front(); q.pop();
            int row = front / m, col = front % m;
            
            for(int k = 0; k < 4; k++) {
                int nrow = row + change[k], ncol = col + change[(k + 1) % 4];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == oldColor) {
                    image[nrow][ncol] = newColor;
                    q.push(nrow * m + ncol);
                }
            }
            
        }
        
        return image;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        Solution obj;
        vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
        for (auto i : ans) {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends