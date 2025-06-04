class Solution {
  public:
    int dp1[101][101];
    int dp2[101][101];
    int lcsOf3(string& s1, string& s2, string& s3)
    {
        int n=s1.size(), m=s2.size(), o=s3.size();
        memset(dp1,0,sizeof(dp1));
        memset(dp2,0,sizeof(dp2));
        int ans=0;
        for(int i=n-1;i>-1;i--){
            for(int j=0;j<m;j++){
                if(s2[j]!=s1[i])continue;
                for(int k=0;k<o;k++){
                    if(s3[k]!=s1[i])continue;
                    dp2[j][k]=max(dp2[j][k],1+dp1[j+1][k+1]);
                }
            }
            for(int j=m-1;j>-1;j--){
                for(int k=o-1;k>-1;k--){
                    dp1[j][k]=max(dp1[j][k],dp2[j][k]);
                }
                for(int k=o-1;k>-1;k--){
                    int maxi=dp1[j][k];
                    maxi=max(maxi,dp1[j+1][k]);
                    maxi=max(maxi,dp1[j][k+1]);
                    maxi=max(maxi,dp1[j+1][k+1]);
                    dp1[j][k]=maxi;
                    ans=max(ans,maxi);
                }
            }
        }
        return ans;
    }
};