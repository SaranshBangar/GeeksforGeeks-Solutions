class Solution {
  public:
    int count(string& s)
    {
        unordered_map<char, int>mp;
        for (int i=0;i<s.length();i++)
            mp[s[i]]++;
        int ans=0;
        for (auto it=mp.begin();it!=mp.end();it++)
            if (it->second%2==0)
                ans++;
        return ans;
    }
};