class Solution {
  public:
int binarysearch(int s,int e,vector<int>&suff,int key){
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            
            if(suff[mid]<key){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
    vector<int> farMin(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        vector<int>ans(n,-1);
        
        vector<int>suff(n);
        suff[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            suff[i]=min(arr[i],suff[i+1]);
        }
        
        for(int i=0;i<n;i++){
            
            ans[i]=binarysearch(i+1,n-1,suff,arr[i]);
        }
        return ans;
    }
};