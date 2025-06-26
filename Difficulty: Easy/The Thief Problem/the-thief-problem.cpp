class Solution {
  public:
    int getMaxVal(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end(), greater<int>());
        int ans=0;
        for (int i=0;i<k && i<arr.size();i++)
            ans+=arr[i];
        return ans;
    }
};