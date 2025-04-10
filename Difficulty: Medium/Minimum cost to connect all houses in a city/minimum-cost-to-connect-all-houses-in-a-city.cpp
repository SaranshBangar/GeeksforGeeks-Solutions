//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

struct cmp{
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        if(a.first > b.first)
            return true;
        return false;
    } 
};


class Solution {
  public:
    int manD(int i, int j, vector<vector<int>> &h)
    {
        int x = abs(h[i][0] - h[j][0]);
        int y = abs(h[i][1] - h[j][1]);
        return x+y;
    }
    
    int minCost(vector<vector<int>>& houses)
    {
        int n = houses.size();
        sort(houses.begin(), houses.end());
        vector<int> dis(n, INT_MAX);
        vector<bool> visited(n, false);
        dis[0] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        pq.push({0, 0});
        int ans = 0;
        while(!pq.empty()){
            auto z = pq.top();
            pq.pop();
            if(visited[z.second])
                continue;
            ans += (z.first);
            visited[z.second] = true;
            for(int i=0;i<n;i++)
            {
                if(!visited[i])
                {
                    int md = manD(z.second, i, houses);
                    int t = z.first;
                    if(md < dis[i])
                    {
                        dis[i] = md;
                        pq.push({dis[i], i});
                    }
                    
                }
                
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> edges;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 2; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;

        cout << obj.minCost(edges);
        cout << "\n";
        cout << "~" << endl;
    }
}

// } Driver Code Ends