//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long altProduct(long long a[], long long n);

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        long long a[n];
        for(int i =0;i<n;i++)
           cin >> a[i];
        
        cout << altProduct(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends




long long altProduct(long long a[], long long n)
{
    long long ans=0;
    sort(a, a+n);
    for (int i=0;i<n/2;i++)
        ans+=(a[i]*a[n-i-1]);
    return ans;
}