class Solution {
  public:
    int maxMinDiff(vector<int>& arr, int k)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int s = 0, e = 1e6 + 5;
        while(e > s + 1) {
            int m = (s + e) / 2;
            int p = 0, c = 1;
            for(int i = 1; i < n; i++) {
                if(arr[i] - arr[p] >= m) {
                    p = i;
                    c++;
                }
            }
            if(c >= k) s = m;
            else e = m;
        }
        return s;
    }
};
