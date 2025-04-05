//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
        int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
        
        int n = grid.size();
        int m = grid[0].size();
        
        
        int cnt = 0;
        for(int i= 0; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if(grid[i][j] == 'W')
                    continue;
                    
                queue<pair<int,int>>q; 
                q.push({i, j});
                
                grid[i][j] = 'W';
                cnt += 1;
                
                while(!q.empty()){
                    auto f = q.front();
                    q.pop();
                    
                    for(int k = 0; k < 8; k++){
                        int nx = f.first + dx[k];
                        int ny = f.second + dy[k];
                        
                        if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 'L'){
                            q.push({nx, ny});
                            grid[nx][ny] = 'W';
                        }
                    }
                }
            }
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.countIslands(grid);
        cout << ans << '\n';

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends