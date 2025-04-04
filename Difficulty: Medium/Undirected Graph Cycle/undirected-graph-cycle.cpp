//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges)
    {
        vector<vector<int>> adj(V);
        vector<bool> visited(V, false);        
        visited[0] = true;
        
        for(auto &i : edges) {
            int u = i[0], v = i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
            
        function<bool(int, int)> dfs = [&](int curr, int prev) -> bool {
            bool res = false;
            for(auto i : adj[curr]) {
                if(i != prev && visited[i] == true) return true;
                else if(i != prev) {
                    visited[i] = true;
                    res |= dfs(i, curr);
                    if(res) return res;
                }
            }
            return res;
        };
        
        return dfs(0, -1);
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V, E;
        cin >> V >> E;
        cin.ignore();
        vector<vector<int>> edges;
        for (int i = 1; i <= E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        bool ans = obj.isCycle(V, edges);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends