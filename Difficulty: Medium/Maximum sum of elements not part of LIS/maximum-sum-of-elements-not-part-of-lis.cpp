class Solution {
  public:
    pair<int, int> add(const pair<int, int> &a, const pair<int, int> &b)
    {
        return {a.first + b.first, a.second + b.second};
    }

    pair<int, int> solve(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.first > b.first)
            return a;
        else if (a.first < b.first)
            return b;
        else if (a.second < b.second)
            return a;
        return b;
    }

    int min_sum = INT_MAX, max_len = 0;

    pair<int, int> lis(vector<int> &arr, int i, int prev, vector<vector<pair<int,int>>>& dp)
    {
        if (i >= arr.size())
        {
            return {0, 0};
        }

        if(dp[i][prev+1] != make_pair(-1,-1)) return dp[i][prev+1];

        pair<int, int> include = {0, 0};
        if (prev == -1 || arr[i] > arr[prev])
        {
            include = add({1, arr[i]}, lis(arr, i + 1, i,dp));
        }

        pair<int, int> exclude = lis(arr, i + 1, prev,dp);
        pair<int, int> best = solve(include, exclude);

        int len = best.first;
        int sum = best.second;

        if (len > 0 && len >= max_len)
        {
            if (len > max_len)
                min_sum = sum;
            else
                min_sum = min(min_sum, sum);
            max_len = len;
        }

        return dp[i][prev+1] = best;
    }

    int nonLisMaxSum(vector<int> &arr)
    {
        int total = accumulate(arr.begin(), arr.end(), 0);
        int n = arr.size();
        vector<vector<pair<int,int>>> dp(n+1,vector<pair<int,int>>(n+2,{-1,-1}));
        lis(arr, 0, -1,dp);
        return total - min_sum;
    }
};