class Solution {
  public:
    int countTriangles(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=2;i<arr.size();i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                int mn=arr[i]-arr[j];
                int ind=lower_bound(arr.begin(),arr.begin()+j+1,mn+1)-arr.begin();
                if(ind<j)
                ans+=(j-ind);
            }
        }
        return ans;
    }
};
