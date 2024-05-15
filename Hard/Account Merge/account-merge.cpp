//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class DisjointSet{
  public:
  DisjointSet() = delete;
  DisjointSet(int n){
      rank.resize(n+1, 0); //N+1 because graph might be 1 based indexing
      parent.resize(n+1);
      size.resize(n+1, 1);
      std::iota(begin(parent), end(parent), 0);
  }

  int getUlParent(int node){ //get ultimate parent
      if(node == parent[node]){
          return node;
      }else{
          return parent[node] = getUlParent(parent[node]);
      }
  }

  void unionByRank(int u, int v){
      int ulp_u = getUlParent(u);
      int ulp_v = getUlParent(v);
      if(ulp_u == ulp_v){
          return;
      }
      if(rank[ulp_u] < rank[ulp_v]){
          parent[ulp_u] = ulp_v;
      }else if(rank[ulp_v] < rank[ulp_u]){
          parent[ulp_v] = ulp_u;
      }else{
          parent[ulp_u] = ulp_v;
          rank[ulp_u]++;
      }
  }
  void unionBySize(int u, int v){
      int ulp_u = getUlParent(u);
      int ulp_v = getUlParent(v);
      if(ulp_u == ulp_v){
          return;
      }
      if(rank[ulp_u] < rank[ulp_v]){
          parent[ulp_u] = ulp_v;
          size[ulp_u] += size[ulp_v];
      }else{
          parent[ulp_v] = ulp_u;
          size[ulp_v] += size[ulp_u];
      }
  }
  private:
  vector<int> rank, parent, size;
};
class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {

        int n = accounts.size(), i, j;
        DisjointSet dsj(n+1);
        unordered_map<string, int> mp;
        vector<vector<string>> res;
        for(i = 0;i<n;i++){
            for(j = 1;j<accounts[i].size();j++){
                if(!mp[accounts[i][j]]){
                    mp[std::move(accounts[i][j])] = i+1;
                }else{
                    dsj.unionByRank(mp[accounts[i][j]], i+1);
                }
            }
        }
        vector<string> adj[n+1];
        for(auto itr{begin(mp)}; itr != end(mp); ++itr){
            adj[dsj.getUlParent(itr->second)].push_back(std::move(string(itr->first)));
        }
        for(i = 1;i<=n;i++){
            if(adj[i].size()){
                sort(adj[i].begin(), adj[i].end());
                adj[i].insert(adj[i].begin(), std::move(accounts[i-1][0]));
                res.push_back(std::move(adj[i]));
            }
        }

        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<string>> accounts;

        for (int i = 0; i < n; i++) {
            vector<string> temp;
            int x;
            cin >> x;

            for (int j = 0; j < x; j++) {
                string s1;
                cin >> s1;
                temp.push_back(s1);
            }
            accounts.push_back(temp);
        }

        ///
        Solution obj;
        vector<vector<string>> res = obj.accountsMerge(accounts);
        sort(res.begin(), res.end());
        cout << "[";
        for (int i = 0; i < res.size(); ++i) {
            cout << "[";
            for (int j = 0; j < res[i].size(); j++) {
                if (j != res[i].size() - 1)
                    cout << res[i][j] << ","
                         << " ";
                else
                    cout << res[i][j];
            }
            if (i != res.size() - 1)
                cout << "], " << endl;
            else
                cout << "]";
        }
        cout << "]" << endl;
    }
}
// } Driver Code Ends