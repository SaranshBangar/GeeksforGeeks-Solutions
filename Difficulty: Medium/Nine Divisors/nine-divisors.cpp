class Solution {
  public:
    int countNumbers(int n)
    {
        int ans = 0;
        for(int i=1;i*i<=n;i++)
        {
            int ct = 0;
            for(int j=1;j*j<=i*i;j++)
            {
                if((i*i)%j == 0)
                {
                    ct++;
                    if(ct > 5)
                        break;
                }
            }
            if(ct == 5)
                ans++;
        }
        return ans;
    }
};