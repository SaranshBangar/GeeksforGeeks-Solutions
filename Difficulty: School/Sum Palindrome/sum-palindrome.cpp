//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int count=0;
  bool pal(int n)
  {
      string str=to_string(n);
      string r=str;
      reverse(r.begin(), r.end());
      return r==str;
  }
  long long rev(long long n)
  {
      long long ret=0;
      while (n)
      {
          ret=((ret*10)+(n%10));
          n/=10;
      }
      return ret;
  }
    long long isSumPalindrome(long long n)
    {
        if (pal(n))
            return n;
        long long n2=rev(n);
        if (pal(n+n2))
            return (n+n2);
        else
        {
            count++;
            if (count>4)
                return -1;
            else isSumPalindrome(n+n2);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout << ob.isSumPalindrome(n) << endl;
    }
    return 0;
}

// } Driver Code Ends