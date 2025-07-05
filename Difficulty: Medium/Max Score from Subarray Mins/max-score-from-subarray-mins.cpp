class Solution {
  public:
    int maxSum(vector<int> &arr)
    {
        int l=0,r=1;
        int ans=0;
        int n=arr.size();
        while(l<n && r<n)
        {
            ans=max(ans,min(arr[l],arr[r])+max(arr[l],arr[r]));
            l++;
            r++;
        }
        return ans;
    }
};