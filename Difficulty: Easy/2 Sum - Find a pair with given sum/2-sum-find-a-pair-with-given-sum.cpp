// User function Template for C++
class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target)
    {
        sort(arr.begin(), arr.end());
        vector<int>vec;
        int low=0, high=arr.size()-1;
        while (low<high)
        {
            if (arr[low]+arr[high]==target)
            {
                vec.push_back(arr[low]);
                vec.push_back(arr[high]);
                return vec;
            }
            else if (arr[low]+arr[high]<target)
                low++;
            else high--;
        }
        return vec;
    }
};