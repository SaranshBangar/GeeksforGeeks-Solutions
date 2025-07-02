class Solution {
  public:
    int totalElements(vector<int> &arr)
    {
        int maxi=0,r=0,l=0;
        map<int,int>mp;
        int n=arr.size();
        while(r<n)
        {
            mp[arr[r]]++;
            while(mp.size()>2)
            {
                mp[arr[l]]--;
                if(mp[arr[l]]==0)
                    mp.erase(arr[l]);
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};