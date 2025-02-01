//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n)
    {
        cout<<"1"<<" ";
        if (n==1)
            return;
        for (int i=2;i<=(n/2)+1;i++)
        {
            if (n%i==0)
                cout<<i<<" ";
        }
        if (n==2)
            return;
        else cout<<n;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends