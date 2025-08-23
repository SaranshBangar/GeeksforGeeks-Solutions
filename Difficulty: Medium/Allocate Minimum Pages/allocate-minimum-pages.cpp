class Solution {
  public:
    bool func(vector<int> &arr, int k, int lt) 
    {
        int cnt=1, sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(sum+arr[i]>lt)
            {
                cnt++;
                sum=arr[i];
            }
            else sum+=arr[i];
        }
        return (cnt<=k);
    }
    int findPages(vector<int> &arr, int k)
    {
        if(k>arr.size())
            return -1;
        int mn=*max_element(arr.begin(), arr.end());
        int mx=accumulate(arr.begin(), arr.end(), 0);
        int left=mn, right=mx;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            if(func(arr, k, mid))
                right=mid;
            else left=mid+1;
        }
        
        return left;
    }
};