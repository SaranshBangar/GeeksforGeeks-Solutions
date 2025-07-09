class Solution {
  public:
    int sumSubMins(vector<int> &arr)
    {
        stack<int>st;
        int n = arr.size();
        int ans = 0;
        vector<int>tillSum(n,0);
        vector<int>nextSmall(n,-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            if(st.empty())
            {
                st.push(i);
                continue;
            }
            nextSmall[i]=st.top();
            st.push(i);
        }
        for(int i=n-1;i>=0;i--)
        {
            if(nextSmall[i]==-1)
                tillSum[i] = arr[i]*(n-i);
            else
            {
                int idx = nextSmall[i];
                tillSum[i] = tillSum[idx]+arr[i]*(idx-i);
            }
            ans += tillSum[i];
        }
        return ans;
    }
};