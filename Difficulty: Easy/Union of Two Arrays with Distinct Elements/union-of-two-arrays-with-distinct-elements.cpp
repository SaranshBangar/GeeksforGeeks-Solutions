// User function Template for C++
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        vector<int>ans;
        for (int i=0;i<a.size();i++)
            ans.push_back(a[i]);
        for (int i=0;i<b.size();i++)
            ans.push_back(b[i]);
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};