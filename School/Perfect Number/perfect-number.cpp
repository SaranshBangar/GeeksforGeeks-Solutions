//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int func(int num)
    {
        int ret=1;
        for (int i=1;i<=num;i++)
            ret*=i;
        return ret;
    }
    int isPerfect(int N)
    {
        int ans=0, temp=N;
        while (temp)
        {
            ans+=func(temp%10);
            temp/=10;
        }
        return (ans==N);
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
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends