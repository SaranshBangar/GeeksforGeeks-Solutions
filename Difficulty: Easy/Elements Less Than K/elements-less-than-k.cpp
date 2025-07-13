// User function Template for C++

//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> list_less_than_k(vector<int> &arr, int k)
    {
        vector<int>vec;
        for (int n:arr)
            if (k>n)
                vec.push_back(n);
        return vec;
    }
};
