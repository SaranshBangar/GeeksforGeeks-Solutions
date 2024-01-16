//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int maxTripletSum(int arr[], int n)
    {
        int first=INT_MIN, second=INT_MIN, third=INT_MIN;
        for (int i=0;i<n;i++)
        {
            if (arr[i]>first)
            {
                third=second;
                second=first;
                first=arr[i];
            } 
            else if (arr[i]>second) 
            {
                third=second;
                second=arr[i];
            } 
            else if (arr[i]>third)
                third=arr[i];
        }
        return (first+second+third);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout <<ob.maxTripletSum(a, n);
	    cout<<"\n";
	}
return 0;
}
// } Driver Code Ends