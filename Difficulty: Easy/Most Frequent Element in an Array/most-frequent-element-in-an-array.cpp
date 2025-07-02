class Solution {
  public:
    int mostFreqEle(vector<int>& arr)
    {
        unordered_map<int, int>mp;
        for (int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        int ans=0, max_freq=0;
        for (auto it=mp.begin();it!=mp.end();it++)
        {
            if (it->second>max_freq)
            {
                max_freq=it->second;
                ans=it->first;
            }
            else if (it->second==max_freq)
                ans=max(ans, it->first);

        }
        return ans;
    }
};