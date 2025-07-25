class Solution {
  public:
    int func(vector<int>arr, int n)
    {
        int ans=arr[0], mx=arr[0];
        for(int i=1;i<n;i++)
        {
            mx=max(arr[i],mx+arr[i]);
            ans=max(ans,mx);
        }
        return ans;
    }
    int maxCircularSum(vector<int> &arr)
    {
        int n=arr.size();
        int mxn=func(arr,n);
        if(mxn<0)
            return mxn;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            arr[i]=-arr[i];
        }
        int mxc=sum+func(arr,n);
        return max(mxn,mxc);
    }
};