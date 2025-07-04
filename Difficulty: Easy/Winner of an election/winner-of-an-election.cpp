class Solution {
  public:
    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(vector<string> &arr)
    {
        unordered_map<string, int>mp;
        for (int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        vector<string>vec(2, "");
        int max_freq=0;
        for (auto it=mp.begin();it!=mp.end();it++)
        {
            if (max_freq<it->second)
            {
                vec[0]=it->first;
                vec[1]=to_string(it->second);
                max_freq=it->second;
            }
            else if (it->second==max_freq && (it->first<vec[0]))
            {
                vec[0]=it->first;
                vec[1]=to_string(it->second);
            }
        }
        return vec;
    }
};