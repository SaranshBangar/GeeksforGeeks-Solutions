class Solution {
  public:
    int countSubstringAtleastK(string& s, int k)
    {
        int ans = 0;
        int i = 0, j = 0, f = 0;
        
        char c[26];
        for(int i = 0; i < 26; i++)
            c[i] = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            while(j < s.size() and f < k)
            {
                c[s[j] - 97]++;
                if(c[s[j] - 97] == 1)
                    f++;
                j++;
            }
            if(f >= k)
                ans += s.size() -j+1;
            c[s[i] - 97]--;
            if(c[s[i] - 97] == 0)
                f--;
        }
        return ans;
        
    }
    
    int countSubstr(string& s, int k)
    {
        int ans = countSubstringAtleastK(s, k) - countSubstringAtleastK(s, k+1);
        return ans;
    }
};