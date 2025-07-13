class Solution {
  public:
    int arraySum(int arr[], int size)
    {
        int ans=0;
        for (int i=0;i<size;i++)
            ans+=arr[i];
        return ans;
    }
};