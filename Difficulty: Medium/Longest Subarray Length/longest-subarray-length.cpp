class Solution {
    private:
    void fillNextGreter(vector<int> &next, vector<int> &arr){
        stack<int> st;
        for(int i= arr.size()-1; i>=0; i--){
            int ele= arr[i];
            while(!st.empty() && ele>=arr[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                next[i]= st.top();
            }
            st.push(i);
        }
        
    }
    void fillPrevious(vector<int> &prev, vector<int> &arr){
       stack<int> st;
       for(int i=0; i<arr.size(); i++){
           int ele= arr[i];
           while(!st.empty() and arr[st.top()]<=ele){
               st.pop();
           }
           if(!st.empty()){
               prev[i]= st.top();
           }
           st.push(i);
       }
    }
  public:
    int longestSubarray(vector<int>& arr) {
        // code here
        vector<int> next(arr.size(), arr.size());
        vector<int> prev(arr.size(), -1);
        fillNextGreter(next, arr);
        fillPrevious(prev, arr);
        int ans=0;
        for(int i=0; i<arr.size(); i++){
            int length= next[i]- prev[i] -1;
            if(arr[i]<= length){
                ans= max(ans, length);
            }
        }
        return ans;
    }
};