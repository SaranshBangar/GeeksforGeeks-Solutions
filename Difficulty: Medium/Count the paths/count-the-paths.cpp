class Solution {
  public:
    int dfs(int i, int &d, vector<vector<int>> &adj, vector<int> &dp)
    {
        if(i == d){
            return 1;
        }
        if(dp[i] != -1) return dp[i];
        
        int count=0;
        for(auto & it: adj[i]){
            count+= dfs(it,d,adj,dp);
        }
        return dp[i]=count;
    }
    
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest)
    {
        vector<vector<int>>adj(V);
        vector<int>dp(V,-1);
        for(auto & it: edges){
            adj[it[0]].push_back(it[1]);
        }
        return dfs(src,dest,adj,dp);
    }
};