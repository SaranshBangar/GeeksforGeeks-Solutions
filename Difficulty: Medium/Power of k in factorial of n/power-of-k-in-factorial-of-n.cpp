class Solution {
  public:
    int maxKPower(int n, int k)
    {
         vector<int> primes;
        vector<bool> isPrime(k+1, true);
        for(int i = 2; i*i <= k; ++i) {
            if(isPrime[i]) {
                primes.push_back(i);
                for(int j = i * i; j <= k; j += i) isPrime[j] = false;
            }
        }
        int temp = k;
        unordered_map<int, int> primeFactors;
        for(int p : primes) {
            if(p * p > temp) break;
            int count = 0;
            while(temp % p == 0) {
                count++;
                temp /= p;
            }
            if(count > 0) primeFactors[p] = count;
        }
        if(temp > 1) {
            primeFactors[temp] = 1;
        }
        int x = INT_MAX;
        for(auto &p : primeFactors) {
            int prime = p.first;
            int e = p.second;
            // cout << prime << ":" << e << endl;
            int limit = floor(log(n) / log(prime));
            // cout << limit << endl;
            int count = 0;
            for(int i = 1; i <= limit; ++i) {
                count += floor(n / pow(prime, i));
            }
            int s = floor(count / e);
            x = min(x, s);
        }
        return x;
    }
};
