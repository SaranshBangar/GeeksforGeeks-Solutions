class Solution {
  public:
    int factorial(int n)
    {
        if (n==0 || n==1)
            return 1;
        else return (factorial(n-1)*n);
    }
};
