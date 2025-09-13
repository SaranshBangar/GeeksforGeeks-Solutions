class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y)
    {
        priority_queue<pair<int,int>>pq;
        for (int i : x) pq.push({-i, 0});
        for (int i : y) pq.push({-i, 1});
        int ans = 0,r = 0, c = 0;
        while (!pq.empty()) {
            auto [val, dir] = pq.top();
            pq.pop();
            if (dir == 0) {
                ans += (n - c) * -val;
                r++;
            } else {
                ans += (m - r) * -val;
                c++;
            }
        }
        return ans;
    }
};
