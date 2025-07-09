// arr is the array
// n is the number of element in array
class Solution {
  public:

    void sumArray(vector<int> &arr)
    {
        int sum=0;
        for (auto it:arr)
            sum+=it;
        for (int i=0;i<arr.size();i++)
            arr[i]=sum-arr[i];
    }
};