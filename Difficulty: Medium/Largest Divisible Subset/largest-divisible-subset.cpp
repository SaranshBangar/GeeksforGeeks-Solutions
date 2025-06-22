class Solution {
  public:
    vector<int> largestSubset(vector<int>& arr)
    {
        int n = arr.size(), mx = 0;
        vector<vector<int>> dp(n);
        vector<int> ans;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n; i++){
            dp[i] = {arr[i]};
            for(int j = 0; j < i; j++) {
                if (1 + dp[j].size() >= dp[i].size() and arr[i] % arr[j] == 0) {
                    vector<int> temp = dp[i];
                    temp.pop_back();
                    if (1 + dp[j].size() ==  dp[i].size()) {
                        temp = dp[j];
                        temp.push_back(arr[i]);
                        dp[i] = max(dp[i], temp);
                    } 
                    else {
                        dp[i] = dp[j];
                        dp[i].push_back(arr[i]);
                    }
                }
            }
            mx = max(mx, (int) dp[i].size());
        }
        
        for (int i = 0; i < n; i++){
            if(dp[i].size() == mx) {
                if(ans.empty())
                    ans = dp[i];
                ans = max(ans, dp[i]);
            }
        }
        return ans;
    }
};