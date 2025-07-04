class Solution {
  public:
    bool checkDuplicates(vector<int> &arr)
    {
        unordered_map<int, int>mp;
        for (int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        for (auto it=mp.begin();it!=mp.end();it++)
            if (it->second!=1)
                return true;
        return false;
    }
};
