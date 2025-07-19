class Solution {
  public:
    int lcm(int a, int b)
    {
        return (a/__gcd(a,b)*b);
    }
    int lcmTriplets(int n)
    {
        if(n<3)
            return n;
        if(n%2 != 0)
            return lcm(n,lcm(n-1,n-2));
        else return max(lcm(n,lcm(n-1,n-3)),lcm(n-1,lcm(n-2,n-3)));
    }
};