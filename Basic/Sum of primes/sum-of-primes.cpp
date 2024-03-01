//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool func(int num)
    {
        if (num<=1)
            return false;
        for (int i=2;i*i<=num;i++)
        {
            if (num%i==0)
                return false;
        }
        return true;
    }
    int primeSum(int N)
    {
        int ans=0;
        while (N!=0)
        {
            int temp=N%10;
            if (func(temp))
                ans+=temp;
            N/=10;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends