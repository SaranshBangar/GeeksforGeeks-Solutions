class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k)
    {
        unordered_map<int, int>mp;
        int currs=0, count=0;
        mp[0]=1;
        for (int num:arr)
        {
            currs+=num;
            if (mp.find(currs-k)!=mp.end())
                count+=mp[currs-k];
            mp[currs]++;
        }
        return count;
    }
};