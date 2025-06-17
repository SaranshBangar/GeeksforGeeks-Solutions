class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k)
    {
        int n = arr.size();
        vector<int> prefix(n,0);
        sort(arr.begin(), arr.end());
        partial_sum(arr.begin(), arr.end(),prefix.begin());
        int ans = INT_MAX;
        int prev = 0;
        for(int i = 0;i<n;i++)
        {
        int index = upper_bound(arr.begin() + i, arr.end(), arr[i] + k) - arr.begin();
           if(i>0 && (arr[i] != arr[i-1]))
               prev = prefix[i-1];
            int x = prev + (prefix[n-1] - prefix[index-1]) - (n-index) *(arr[i] + k);
             ans = min(ans, x);
        }
        return ans;
    }
};
