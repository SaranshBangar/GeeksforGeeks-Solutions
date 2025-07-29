class Solution {
  public:
    vector<int> asciirange(string& s)
    {
        int n = s.size();
        vector<int>prf(n,0);
        int idx[26] = {0};
        for (int i=0; i<n; i++){
            idx[s[i]-'a'] = i;
        }
        
        int currSum = 0;
        for (int i=0; i<n; i++){
            currSum += (int)(s[i]);
            prf[i] = currSum;
        }
        vector<int>ans;
        unordered_set<char>st;
        for (int i=0; i<n; i++){
            if (st.find(s[i]) != st.end()) continue;
            int id = i;
            int jd = idx[s[i]-'a'];
            if (id == jd) continue;
            int currSum = prf[jd-1] - prf[id];
            if (currSum == 0) continue;
            ans.push_back(currSum);
            st.insert(s[i]);
        }
        
        return ans;
    }
};