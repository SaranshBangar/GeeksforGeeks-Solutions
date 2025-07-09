// User function Template for C++

class Solution {
  public:
    int minimumApple(vector<int>& arr)
    {
        unordered_map<int, int>mp;
        for (auto it:arr)
            mp[it]++;
        return mp.size();
    }
};
