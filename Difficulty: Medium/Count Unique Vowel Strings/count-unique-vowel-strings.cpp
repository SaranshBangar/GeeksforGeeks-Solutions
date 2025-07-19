class Solution {
  public:
    int vowelCount(string& s)
    {
        unordered_map<int,int>mp;
        for(auto it:s){
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
                mp[it]++;
            }
        }
        if(mp.size()==0) return 0;
        int ans=1;
        for(auto it:mp){
            ans*=it.second;
        }
        int sz=mp.size();
        while(sz>0){
            ans*=sz;
            sz--;
        }
        return ans;
    }
};