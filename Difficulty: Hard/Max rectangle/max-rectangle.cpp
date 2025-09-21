class Solution {
  public:
    int getArea(int m, vector<int>& bars){
        vector<int> nse(m,m), pse(m,-1);
        stack<int> st;
        for(int i=0;i<m;i++){
            while(!st.empty() && bars[st.top()]>=bars[i]) st.pop();
            if(!st.empty()) pse[i]=st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=m-1;i>=0;i--){
            while(!st.empty() && bars[st.top()]>=bars[i]) st.pop();
            if(!st.empty()) nse[i]=st.top();
            st.push(i);
        }
        int area=0;
        for(int i=0;i<m;i++){
            area=max(area, bars[i]*(nse[i]-pse[i]-1));
        }
        return area;
    }
    int maxArea(vector<vector<int>> &mat) {
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        vector<int> bars(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) {
                if(mat[i][j]==0) bars[j]=0;
                else bars[j]++;
            }
            ans=max(ans, getArea(m,bars));
        }
        return ans;
    }
};