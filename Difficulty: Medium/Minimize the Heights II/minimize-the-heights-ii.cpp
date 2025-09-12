class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k)
    {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int ans=arr[n-1]-arr[0];
        for (int i=1;i<arr.size();i++)
        {
            if (arr[i]-k<0)
                continue;
            int mx=max(arr[i-1]+k, arr[n-1]-k);
            int mn=min(arr[0]+k, arr[i]-k);
            ans=min(ans, mx-mn);
        }
        return ans;
    }
};