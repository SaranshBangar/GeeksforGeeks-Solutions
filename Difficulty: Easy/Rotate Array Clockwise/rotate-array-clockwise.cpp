class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k)
    {
        int n=arr.size();
        k=k%n;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
    }
};
