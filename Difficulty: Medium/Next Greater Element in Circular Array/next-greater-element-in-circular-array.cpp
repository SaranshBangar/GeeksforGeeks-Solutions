class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr)
    {
        vector<int>tmp=arr;
        int n=arr.size();
        for(int i=0; i<n-1; i++){
            tmp.push_back(arr[i]);
        }
        
        stack<int>st;
        int sz=tmp.size();
        vector<int>ans(n, -1);
        
        for(int i=sz-1; i>=0; i--){
            while(!st.empty() && st.top()<=tmp[i]){
                st.pop();
            }
            if(i<n) ans[i]=st.empty()?-1:st.top();
            st.push(tmp[i]);
        }
        
        return ans;
    }
};