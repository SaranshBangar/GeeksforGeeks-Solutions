class Solution {
  public:
    void printDivisors(int n)
    {
        for (int i=1;i<(n/2)+1;i++)
            if (n%i==0)
                cout<<i<<" ";
        cout<<n;
    }
};