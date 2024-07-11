//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    pair<int,int>p = {-1,-1};
    int dxx[4] = {-1,1,0,0};
    int dyy[4] = {0,0,-1,1};
    void dfs(int i,int j,vector<vector<int>>&grid,vector<vector<pair<int,int>>>&vis,int str,int stc,int& ct){
        if(vis[i][j]!=p){
            return;
        }
        vis[i][j] = {str,stc};
        ct++;
        for(int x = 0;x < 4;x++){
            if(i+dxx[x] < grid.size() and i+dxx[x]>=0 and j+dyy[x]>=0 and j+dyy[x]<grid[0].size() and vis[i+dxx[x]][j+dyy[x]]==p and grid[i+dxx[x]][j+dyy[x]]==1){
                dfs(i+dxx[x],j+dyy[x],grid,vis,str,stc,ct);
            }
        }
    }
    int MaxConnection(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<pair<int,int>>>vis(n,vector<pair<int,int>>(m,{-1,-1}));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==p and grid[i][j]==1){
                    int ct = 0;
                    dfs(i,j,grid,vis,i,j,ct);
                    vis[i][j] = {-1,ct};
                }
            }
        }
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    int ctp = 0;
                    set<pair<int,int>>s;
                    for(int x = 0;x < 4;x++){
                        if(i+dxx[x] < grid.size() and i+dxx[x]>=0 and j+dyy[x]>=0 and j+dyy[x]<grid[0].size()){
                            if(vis[i+dxx[x]][j+dyy[x]]==p){
                                ctp+=0;
                            }
                            else if(vis[i+dxx[x]][j+dyy[x]].first==-1 and s.find({i+dxx[x],j+dyy[x]})==s.end()){
                                ctp+=vis[i+dxx[x]][j+dyy[x]].second;
                                s.insert({i+dxx[x],j+dyy[x]});
                            }
                            else if(vis[i+dxx[x]][j+dyy[x]].first>=0){
                                int t1 = vis[i+dxx[x]][j+dyy[x]].first;
                                int t2 = vis[i+dxx[x]][j+dyy[x]].second;
                                if(s.find({t1,t2})==s.end()){
                                    ctp+=vis[t1][t2].second;
                                    s.insert({t1,t2});
                                }
                            }
                        }
                    }
                    ans = max(1+ctp,ans);
                }
            }
        }
        return (ans==INT_MIN)?n*n:ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout << obj.MaxConnection(grid) << "\n";
    }
}

// } Driver Code Ends