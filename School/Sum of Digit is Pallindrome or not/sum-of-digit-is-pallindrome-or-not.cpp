//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool pal(string num)
    {
        string rev=num;
        reverse(rev.begin(), rev.end());
        return num==rev;
    }
    int isDigitSumPalindrome(int n)
    {
        int sum=0;
        while (n)
        {
            sum+=n%10;
            n/=10;
        }
        return (pal(to_string(sum)));
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
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends