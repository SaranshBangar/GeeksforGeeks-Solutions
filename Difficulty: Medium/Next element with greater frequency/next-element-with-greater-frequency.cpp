class Solution {
  public:
    vector<int> findGreater(vector<int>& arr)
    {
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        stack<int>st;
        
        int n=arr.size();
        vector<int>ans(n,-1);
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && mp[st.top()]<=mp[arr[i]]){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};
