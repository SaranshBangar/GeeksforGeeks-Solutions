class Solution {
  public:
    int help(string &s)
    {
        int cnt=0;
        for(auto it:s){
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
                cnt++;
            }
        }
        return cnt;
    }
    int countBalanced(vector<string>& arr)
    {
        int n=arr.size();
        vector<int>diff(n,0);
        for(int i=0;i<n;i++){
            int vows=help(arr[i]);
            diff[i]=2*vows-arr[i].size();
        }
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=diff[i];
            if(mp.find(sum)!=mp.end()){
                ans+=mp[sum];
            }
            mp[sum]++;
        }
        return ans;
    }
};