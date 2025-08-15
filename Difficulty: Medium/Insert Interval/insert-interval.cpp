// User function Template for C++

class Solution {
  public:
    vector<vector<int>>func(vector<vector<int>>&vec)
    {
        sort(vec.begin(), vec.end());
        vector<vector<int>>res;
        res.push_back(vec[0]);
        for (int i=1;i<vec.size();i++)
        {
            vector<int>&curr=vec[i];
            vector<int>&last=res.back();
            if (curr[0]<=last[1]) 
                last[1]=max(last[1], curr[1]);
            else res.push_back(curr);
        }
        return res;
    }
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        intervals.push_back(newInterval);
        return func(intervals);
    }
};
