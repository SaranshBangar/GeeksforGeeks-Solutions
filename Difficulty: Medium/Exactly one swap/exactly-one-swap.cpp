class Solution {
  public:
    int countStrings(string &s)
    {
        int n = s.length();
        
        vector<int> freq(26, 0);
        for(int i = 0; i < n; i++) freq[s[i] - 'a']++;
        
        int sum = freq[25], ans = 0, f = (freq[25] > 1);
        
        for(int i = 24; i >= 0; i--)
        {
            ans += (freq[i] * sum);
            sum += freq[i];
            if(freq[i] > 1) f = 1;
        }
        
        return ans + f;
    }
};
