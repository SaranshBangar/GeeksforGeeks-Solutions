class Solution {
  public:
    void rearrange(vector<int> &arr, int x)
    {
        stable_sort(arr.begin(), arr.end(), [&](int a, int b) {
            return abs(a - x) < abs(b - x);
        });
    }
};