//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool isSafe(int node, bool graph[101][101], int n, vector<int> &color, int col)
    {
        for (int k=0;k<n;k++)
        {
            if (graph[node][k] && color[k]==col)
                return false;
        }
        return true;
    }
    
    bool graphColoringUtil(bool graph[101][101], int m, int n, vector<int> &color, int node)
    {
        if (node==n)
            return true;
        for (int i=1;i<=m;i++)
        {
            if (isSafe(node, graph, n, color, i))
            {
                color[node]=i;
                if (graphColoringUtil(graph, m, n, color, node+1))
                    return true;
                color[node]=0;
            }
        }
        return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n)
    {
        vector<int> color(n, 0);
        if (graphColoringUtil(graph, m, n, color, 0))
            return true;
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends