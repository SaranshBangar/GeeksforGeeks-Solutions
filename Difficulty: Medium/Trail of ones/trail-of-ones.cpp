class Solution {
  public:
    int countConsec(int n)
    {
        int total=1<<n;
        int dp[n+2]; 
        dp[0]=1;
        dp[1]=2;
        for (int i=2;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return (total-dp[n]);
    }
};