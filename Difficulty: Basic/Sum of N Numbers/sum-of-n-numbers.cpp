// User function Template for C++
class Solution {
  public:
    int sumOfNumbers(int n)
    {
        int ans=0;
        for (int i=1;i<=n;i++)
            ans+=i;
        return ans;
    }
};