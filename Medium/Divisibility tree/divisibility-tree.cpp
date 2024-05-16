//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int dfs( unordered_map<int, vector<int>> &map, int u, int parent, int &ans)
    {
        int count = 1;
        for(auto &i : map[u]) {
            if(i != parent) {
                int subtree = dfs(map, i, u, ans);

                if(subtree % 2 == 0)    ans++;
                else    count++;
            }
        }

        return count;
    }

	int minimumEdgeRemove(int n, vector<vector<int>> edges)
	{
	    unordered_map<int, vector<int>> map;

        for(auto &edge : edges) {
            map[edge[0]].push_back(edge[1]);
            map[edge[1]].push_back(edge[0]);
        }

        int ans = 0;
        dfs(map, 1, -1, ans);
        return ans;
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends