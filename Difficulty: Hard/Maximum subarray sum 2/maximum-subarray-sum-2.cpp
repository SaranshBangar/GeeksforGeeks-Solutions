class Solution {
  public:
    int maxSubarrSum(vector<int>& arr, int a, int b) {
        // code here
        int n=arr.size();
        
        vector<long long> pref(n+1,0);
        
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+arr[i-1];
        }
        
        deque<int> dq;
        
        int maxSum=INT_MIN;
        
        for(int r=a;r<=n;r++){
           int l=r-a;
           
           while (!dq.empty() && pref[dq.back()] >= pref[l]){
               dq.pop_back();
           }
           
           dq.push_back(l);
           
           while (!dq.empty() && dq.front() < r-b){
                dq.pop_front();
           }
           
           maxSum=max(maxSum,(int)(pref[r]-pref[dq.front()]));
        }
        
        return maxSum;
        
    }
};