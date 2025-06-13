class Solution {
  public:
    int kokoEat(vector<int>& a, int k)
    {
        int n=a.size();
        int l=1;
        int r=INT_MIN;
        for(int i=0;i<n;i++)r=max(r,a[i]);
        while(l<r){
            int m=(l+r)/2;
            int c=0;
            for(int i=0;i<n;i++)c=c+ (a[i]/m) + (a[i]%m !=0 );
            if(c<=k)r=m;
            else l=m+1;
        }
        return l;
    }
};