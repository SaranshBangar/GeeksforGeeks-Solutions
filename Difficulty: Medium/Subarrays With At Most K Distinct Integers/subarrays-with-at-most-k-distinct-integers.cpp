class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k)
    {
        int ans=0;
        int i=0;
        int j=0;
        int n=arr.size();
        unordered_map<int,int>mp;
        while(j<n)
        {
            mp[arr[j]]++;
            while(i<j && mp.size()>k)
            {
                if(--mp[arr[i]]==0)
                    mp.erase(arr[i]);
                i++;
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
};