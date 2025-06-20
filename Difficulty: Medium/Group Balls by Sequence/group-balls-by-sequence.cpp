class Solution {
  public:
    bool validgroup(vector<int> &arr, int k)
    {
        unordered_map<int, int> mp;
        int n = arr.size();
        
        for (auto it: arr){
            mp[it]++;
        }
        if (n % k != 0) return false;
        if (k == 1) return true;
        
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < n; i++){
            int prev = arr[i];
             if (mp[prev] == 0) continue;
            int curr_freq = mp[prev];
            mp[prev] = 0;
            int count = k - 1;
            while (count--){
                if (mp[prev + 1] < curr_freq) return false;
                else {
                    mp[prev + 1] -= curr_freq;
                }
                prev++;
            }
            
        }
        return true;
    }
};