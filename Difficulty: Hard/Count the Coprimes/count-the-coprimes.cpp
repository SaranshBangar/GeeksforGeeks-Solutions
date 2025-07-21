class Solution {
  public:
    int cntCoprime(vector<int>& arr)
    {
        // 1) Find the maximum value to size our frequency arrays
        int M = *max_element(arr.begin(), arr.end());

        // 2) Count occurrences of each number
        vector<int> freq(M + 1, 0);
        for (int x : arr) freq[x]++;

        // 3) For every i, count how many array elements are multiples of i
        //    multiples[i] = ∑ freq[i * k]
        vector<int> multiples(M + 1, 0);
        for (int i = 1; i <= M; ++i) {
            for (int j = i; j <= M; j += i) {
                multiples[i] += freq[j];
            }
        }

        // 4) dp[i] = number of pairs (x, y) whose GCD is exactly i
        //    Start from largest i downward, so we can subtract out contributions
        //    of multiples (Inclusion–Exclusion)
        vector<long long> dp(M + 1, 0);
        for (int i = M; i >= 1; --i) {
            long long c = multiples[i];
            // Total pairs among those divisible by i
            dp[i] = c * (c - 1) / 2;
            // Subtract pairs that have gcd = k * i for k ≥ 2
            for (int k = 2 * i; k <= M; k += i) {
                dp[i] -= dp[k];
            }
        }

        // 5) dp[1] now holds the count of pairs whose GCD is exactly 1
        return (int)dp[1];
    }
};
