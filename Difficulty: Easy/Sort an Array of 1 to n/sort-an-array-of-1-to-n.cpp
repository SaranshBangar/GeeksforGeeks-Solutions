// User function Template for C++

class Solution {
  public:
    vector<int> sortArray(vector<int>& arr)
    {
        for (int i=1;i<=arr.size();i++)
            arr[i-1]=i;
        return arr;
    }
};