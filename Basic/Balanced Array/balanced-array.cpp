//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int func1(int a[], int n)
    {
        int sum=0;
        for (int i=0;i<n/2;i++)
            sum+=a[i];
        return sum;
    }
    int func2(int a[], int n)
    {
        int sum=0;
        for (int i=n/2;i<n;i++)
            sum+=a[i];
        return sum;
    }
    int minValueToBalance(int a[], int n)
    {
        int left=func1(a, n);
        int right=func2(a, n);
        return abs(left-right);
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends