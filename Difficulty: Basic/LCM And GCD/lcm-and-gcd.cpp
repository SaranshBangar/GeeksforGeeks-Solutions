//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int gcd (int a, int b)
    {
        if (a==0)
            return b;
        if (b==0)
            return a;
        if (a==b)
            return a;
        if (a>b)
          return gcd(a-b, b);
        return gcd(a, b-a);
    }
    int lcm (int a, int b, int num)
    {
        return ((a*b)/num);
    }
    vector<int> lcmAndGcd(int a, int b)
    {
        vector<int>ans(2, 1);
        ans[1]=gcd(a, b);
        ans[0]=lcm(a, b, ans[1]);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends