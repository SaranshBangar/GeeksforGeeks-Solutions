//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int N)
    {
        int ans=0;
        for (int a=1;a<=cbrt(N);a++)
        {
            for (int b=0;b<=a;b++)
            {
                if ((a*a*a)+(b*b*b)==N)
                {
                    if (b==0 || a==b)
                        ans+=1;
                    else ans+=2;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends