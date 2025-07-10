class Solution {
  public:
    string longestString(vector<string> &arr)
    {
        sort(arr.begin(),arr.end());
        unordered_map<string,bool>mp;
        
        string ans="";
        for(int j=0;j<arr.size();j++){
            string x=arr[j].substr(0,arr[j].size()-1);
            if(arr[j].size()==1 || mp.find(x)!=mp.end()){
                mp[arr[j]]=1;
                if(ans.size()<arr[j].size()) ans=arr[j];
            }
        }
        return ans;
    }
};