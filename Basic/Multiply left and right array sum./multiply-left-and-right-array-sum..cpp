//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

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
int multiply(int arr[], int n)
{
    int left=func1(arr, n);
    int right=func2(arr, n);
    return left*right;
}

