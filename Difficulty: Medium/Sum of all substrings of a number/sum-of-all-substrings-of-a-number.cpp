class Solution {
  public:
    public:
    int mod = 1e9+7;
    int sumSubstrings(string s)
    {
        int ans =0;
        for(int i=0;i<s.size();i++) 
        {
            for(int j=i;j<s.size();j++)
                ans+=stoi(s.substr(i,j-i+1));
        }
        return ans;
    }
};