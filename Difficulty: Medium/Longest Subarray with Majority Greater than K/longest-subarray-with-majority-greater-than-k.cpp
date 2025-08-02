class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k)
    {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0,greaterK=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>k)
                greaterK++;
            else greaterK--;
            if(greaterK>0)
                ans=i+1;
            else
            {
                if(mp.find(greaterK)==mp.end())
                    mp[greaterK]=i;
                if(mp.find(greaterK-1)!=mp.end())
                    ans=max(ans,i-mp[greaterK-1]);
            }
        }
        return ans;
    }
};