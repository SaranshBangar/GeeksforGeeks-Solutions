class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius)
    {
        int n=color.size();
        vector<int>a(n,-1);
        
        if(n<2)
            return 1;
        int c=0;
        int i=0,j=1;
        int f=0;
        while(j<n)
        {
            if(f==0)
            i=j-1;
            if(color[i]==color[j]&&radius[i]==radius[j]&&a[i]==-1)
            {
                a[i]=1;
                a[j]=1;
                f=1;
                c=c+2;
                if(i>=1&&j<n-1&&a[i-1]==-1)
                {
                    f=1;
                    i--;
                    j++;
                }
                else
                {
                    f=0;
                    j=j+2;
                }
            }
            else
            {
                f=0;
                j++;
            }
        }
        return n-c;
    }
};