class Solution {
  public:
    int f(vector<int>&a,int m){
        int ans=0;
        for(auto it:a){
             ans += (it + m - 1) / m;
        }
        return ans;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        sort(arr.begin(),arr.end());
        int l=1,h=*max_element(arr.begin(),arr.end());
        int ans=0;
        while(l<=h){
            int m=l+(h-l)/2;
            if(f(arr,m)>k){
                //ans=m;
                l=m+1;
            }
            else{
                ans=m;
                h=m-1;
            }
        }
        return ans;
        
    }
};
