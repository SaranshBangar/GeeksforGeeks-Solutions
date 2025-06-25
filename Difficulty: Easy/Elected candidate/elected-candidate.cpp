// User function Template for C++

class Solution {
  public:
    string electionWinner(vector<string>& arr)
    {
        unordered_map<string, int>st;
        for (int i=0;i<arr.size();i++)
            st[arr[i]]++;
        int vote=0;
        string ans="";
        for (auto it=st.begin();it!=st.end();it++)
        {
            if (it->second>vote)
            {
                vote=it->second;
                ans=it->first;
            }
        }
        return ans;
    }
};