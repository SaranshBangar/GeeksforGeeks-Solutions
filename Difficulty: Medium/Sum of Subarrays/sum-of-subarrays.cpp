class Solution {
  public:
    int subarraySum(vector<int>& arr)
    {
        int ans=0;
        for (int i=0; i< arr.size(); i++)
            ans+= ((i+1)* (arr.size()-i)* arr[i]);
      return ans;
    }
};