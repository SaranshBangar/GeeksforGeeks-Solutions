//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int func (int num)
    {
        int ret=1;
        if (num==1)
            return ret;
        for (int i=2;i<=(num/2)+1;i++)
        {
            if (num%i==0)
                ret+=i;
        }
        if (num==2)
            return ret;
        else return (ret+num);
    }
    int sumOfDivisors(int n)
    {
        int ans=0;
        for (int i=1;i<=n;i++)
            ans+=func(i);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends