//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  private:
    void dfs(int v, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& temp) {
        // mark the current vertex as visited
        visited[v] = true;

        // push the current vertex
        temp.push_back(v);

        // explore other vertices adjacent to this vertex, v
        for(auto to : adj[v])
            if(!visited[to])
                dfs(to, adj, visited, temp);
    }

  public:
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        vector<vector<int>> adj(v + 1);
        for(auto edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(v + 1, false);
        int ans = 0;

        for(int i=1; i<=v; i++) {
            if(!visited[i]) {
                vector<int> temp;
                dfs(i, adj, visited, temp);

                // checking if it is good
                bool flag = true;
                for(auto &it : temp) {
                    if(adj[it].size() != temp.size() - 1) {
                        flag = false;
                        break;
                    }
                }
                if(flag)   ans++;
            }
        }

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        int res = obj.findNumberOfGoodComponent(e, v, edges);

        cout << res << endl;
    }
}

// } Driver Code Ends