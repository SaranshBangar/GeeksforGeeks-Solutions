class Solution {
  public:
    int hIndex(vector<int>& citations)
    {
        sort(citations.begin(), citations.end());
        int n=citations.size();
        int low=0, high=n-1;
        int hindex=0;
        while (low<=high)
        {
            int mid=(low+high)/2;
            if (citations[mid]>=(n-mid))
            {
                hindex=n-mid;
                high=mid-1;
            } 
            else low=mid+1;
        }
        return hindex;
    }
};