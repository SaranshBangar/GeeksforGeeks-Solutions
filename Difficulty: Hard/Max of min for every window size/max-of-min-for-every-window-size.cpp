

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr)
    {
        int n=arr.size();
        vector<int>nse(n, n), pse(n, -1);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            pse[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }
        vector<int>ans(n, 0);
        for(int i=0;i<n;i++)
        {
            int sz=nse[i]-pse[i]-1;
            ans[sz-1]=max(ans[sz-1], arr[i]);
        }
        for(int i=n-2;i>=0;i--)
            ans[i]=max(ans[i], ans[i+1]);
        return ans;
    }
};

