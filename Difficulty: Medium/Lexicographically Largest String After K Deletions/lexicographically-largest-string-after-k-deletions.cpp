class Solution {
  public:
    string maxSubseq(string& s, int k)
    {
        string ans;
        for(int i = 0; i < s.size(); i++)
        {
            while(!ans.empty() && ans.back() < s[i] && k > 0)
            {
                ans.pop_back();
                k--;
            }
            ans.push_back(s[i]);
        }
        while(k > 0)
        {
            ans.pop_back();
            k--;
        }
        return ans;
    }
};
