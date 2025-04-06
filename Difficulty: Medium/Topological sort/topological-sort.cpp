//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges)
    {
        vector<int>ans;
        vector<int>deg(V + 1, 0);
        vector<vector<int>>graf(V);
        for(auto i : edges)
        {
            graf[i[0]].push_back(i[1]);
            deg[i[1]]++;
        }
        queue<int>q;
        for(int i = 0; i < V; i++)
        {
            if(deg[i] == 0)
            {
                q.push(i);
                ans.push_back(i);
                deg[i] = -1;
            }
        }
        while(!q.empty())
        {
            int f = q.front();
            q.pop();
            for(auto i : graf[f])
            {
                deg[i]--;
                if(deg[i] == 0)
                {
                    deg[i] = -1;
                    q.push(i);
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int check(int V, vector<int> &res, vector<vector<int>> adj) {

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int V, E;
        cin >> V >> E;

        int x = V;
        vector<vector<int>> adj(V);
        vector<vector<int>> edges;

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            edges.push_back({u, v});
        }

        Solution obj;
        vector<int> res = obj.topoSort(V, edges);
        bool ans = check(x, res, adj);
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