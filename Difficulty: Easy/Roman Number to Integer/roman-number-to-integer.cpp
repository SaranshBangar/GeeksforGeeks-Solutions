class Solution {
  public:
    int romanToDecimal(string &s)
    {
        unordered_map<char, int> value = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;
            
        for (int i = 0; i < s.size(); ++i) {
            int curr = value[s[i]];
            int next = 0;
            if(i<s.size()-1){
                next = value[s[i+1]];
            }
    
            if (curr < next)
                ans -= curr;
            else
                ans += curr;
        }
    
        return ans;
    }
};