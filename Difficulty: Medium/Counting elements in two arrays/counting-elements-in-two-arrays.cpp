class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b)
    {
        vector<int> ans;
        sort(b.begin(), b.end());  

        for (int i = 0; i < a.size(); i++)
        {
            int count = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
            ans.push_back(count);
        }

        return ans;
    }
};