//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int timer = 0;
    void dfs(int node,int parent,vector<int> &vis,vector<int> &tin,vector<int> &low,
      vector<int> &mark, vector<int> adj[]){
          vis[node]=1;
          tin[node] = low[node] = timer;
          timer++;
          int child=0;
          for(auto it : adj[node]){
              if(it == parent) continue;
              if(!vis[it]){
                  dfs(it,node,vis,tin,low,mark,adj);
                  low[node] = min(low[node],low[it]);
                  if(low[it] >= tin[node] && parent!=-1) mark[node]=1; 
                  child++;
              }
              if(vis[it]){
                  low[node] = min(low[node],tin[it]);
              }
          }
          
          if(child>1 && parent==-1)
          mark[node] = 1;
      }
    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        
        for(auto &edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        
        vector<int> vis(V,0), tin(V,0), low(V,0),mark(V,0);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,-1,vis,tin,low,mark,adj);
            }
        }
        
        vector<int> res;
        
        for(int i=0;i<V;i++){
            if(mark[i]) res.push_back(i);
        }
        
        if(res.size()==0) return {-1};
         
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> edges;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        Solution obj;
        vector<int> ans = obj.articulationPoints(V, edges);
        sort(ans.begin(), ans.end());
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends