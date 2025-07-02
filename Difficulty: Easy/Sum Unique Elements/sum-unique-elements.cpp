// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    int unique_elements(vector<int> &arr)
    {
        int ans=0;
        unordered_map<int, int>mp;
        for (int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        for (auto it=mp.begin();it!=mp.end();it++)
            if (it->second==1)
                ans+=it->first;
        return ans;
    }
};