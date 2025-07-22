class Solution {
  public:
    int missingNumber(vector<int> &arr)
    {
        vector<int>ans;
        int n=arr.size();
        for (int i=0;i<n;i++)
        {
            if (arr[i]>=1)
                ans.push_back(arr[i]);
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        for (int i=1;i<=ans.size();i++)
        {
            if (ans[i-1]!=i)
                return i;
        }
        return ans.size()+1;
    }
};