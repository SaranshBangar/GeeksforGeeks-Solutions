// User function Template for C++
class Solution {
  public:
    bool checkValidity(int a, int b, int c)
    {
        if ((a+b>c) && (a+c>b) && (b+c>a))
            return true;
        else return false;
    }
};