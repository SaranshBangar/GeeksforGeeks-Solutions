class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right)
    {
        int mini=INT_MAX;
        int maxi=0;
        if(!left.empty())
        {
            for (int i=0;i<left.size();i++)
                maxi=max(maxi, left[i]);
        }
        if(!right.empty())
        {
            for (int i=0;i<right.size();i++)
                mini=min(mini, right[i]);
        }
        return max(maxi, n-mini);
    }
};