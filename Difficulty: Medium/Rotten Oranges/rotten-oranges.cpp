//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<int,int>> q;
        int cnt_f = 0;
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j]==1) cnt_f++;
                else if(mat[i][j]==2) 
                    q.push({i,j});
            }
        }
        if(cnt_f == 0) return 0;
        vector<pair<int,int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
        int timer = 0;
        
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                for(auto d : dir){
                    int di = i + d.first;
                    int dj = j + d.second;
                    
                    if(di >= 0 && di < n && dj >= 0 && dj < m){
                        if(mat[di][dj] == 1){
                            cnt_f--;
                            
                            mat[di][dj]++;
                            q.push({di,dj});
                        }
                    }
                }
            }
            timer++;
            //
        }
        return (cnt_f==0) ? timer-1 : -1;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(mat);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends