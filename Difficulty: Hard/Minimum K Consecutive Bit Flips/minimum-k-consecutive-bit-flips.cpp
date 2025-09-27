class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> isFlipped(n, 0);  // marks if a flip starts at index i
        int flips = 0; // current parity of flips (0 = even, 1 = odd)
        int res = 0;   // count of operations

        for (int i = 0; i < n; i++) {
            // remove the effect of a flip window that ends here
            if (i >= k) {
                flips ^= isFlipped[i - k];
            }

            // check effective value at arr[i]
            if ((arr[i] ^ flips) == 0) {
                // must flip here
                if (i + k > n) return -1; // cannot flip beyond array bounds
                res++;
                flips ^= 1;        // toggle flip effect
                isFlipped[i] = 1;  // mark flip started at i
            }
        }

        return res;
    }
};