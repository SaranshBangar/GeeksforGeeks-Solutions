//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long countWays(long long N)
    {
        long long ans=((N+2)*(N+1))/2;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        
        Solution ob;
        cout<<ob.countWays(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends