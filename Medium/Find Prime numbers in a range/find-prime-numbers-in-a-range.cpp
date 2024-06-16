//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool func(int num)
    {
        if (num==1)
            return false;
        for (int i=2;i*i<=num;i++)
        {
            if (num%i==0)
                return false;
        }
        return true;
    }
    vector<int> primeRange(int M, int N)
    {
        vector<int>vec;
        for (int i=M;i<=N;i++)
        {
            if (func(i))
                vec.push_back(i);
        }
        return vec;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends