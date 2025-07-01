class Solution {
  public:
    int substrCount(string &s, int k)
    {
        int n=s.size();
        int ans=0;
        int i=0;
        int j=0;
        unordered_map<char,int>mp;
        while(j<n)
        {
          mp[s[j]]++;
            if(j-i+1==k)
            {
                if(mp.size()==k-1)
                    ans++;
                if(mp[s[i]]>1)
                    mp[s[i]]--;
                else mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};